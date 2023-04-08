#include "../inc/push_swap.h"

int conditions(t_all *all, char **args, long long number)
{
    if(cifnum(args))
            return (1);
    if (cifn_bigger_smaller(number))
            return (1);
    if (cifdup(args))
            return (1);
    return (0);
}

int ifsign(char x)
{
    if (x == 45 || x == 43 || ft_isdigit(x))
        return (1);
    return (0);
}

// int ifnum(char *string)
// {
//     int i;

//     i = 1;
//     if (!string || !string[0] || !ifsign(string[0]))
//         return (0);
//     while(i < ft_strlen(string))
//     {
//         if (!ft_isdigit(string[i]))
//             return (0);
//         i++;
//     }
//     return (1);
// }

// int ifdup(t_all *all, int number)
// {
//     t_node *temp;

//     temp = all->a_stack;
//     while(temp)
//     {
//         if (temp->value == number)
//             return (1);
//         temp = temp->next;
//     }
//     return (0);
// }

// void    exit_s(t_all *all)
// {
//     t_node *to_f;
//     t_node *nexto_f;

//     nexto_f = all->a_stack;
//     while (nexto_f)
//     {
//         to_f = nexto_f;
//         nexto_f = nexto_f->next;
//         free(to_f);
//     }
//     nexto_f = all->b_stack;
//     while (nexto_f)
//     {
//         to_f = nexto_f;
//         nexto_f = nexto_f->next;
//         free(to_f);
//     }
//     exit(0);
// }





int cifnum(char **argv)
{
    int args;
    int arg;

    args = 0;
    while (argv[args])
    {
        arg = 0;
        while(argv[args][arg])
        {
            if (!argv[args][arg] || !argv[args][arg] || !ifsign(argv[args][arg]))
                return (1);
            if (argv[args][arg] == 43 || argv[args][arg] == 45)
                arg++;
            if (!(argv[args][arg] >= 48 && argv[args][arg] <= 57))
            {
                ft_putstr_fd("Error\n", 2);
                return (1);
            }
            arg++;
        }
        args++;
    }
    return (0);
}

int cifdup(char **argv)
{
    int i;
    int ii;
    long long tempi;
    long long tempii;

    i = 0;
    while (argv[i])
    {
        ii = 0;
        tempi = ft_atol(argv[i]);
        while (argv[ii])
        {
            tempii = ft_atol(argv[ii]);
            if (tempii == tempi && i != ii)
            {
                printf("Error");
                return (1);
            }
            ii++;
        }
        i++;
    }
    return (0);
}

int cifn_bigger_smaller(long long number)
{
    if(!(number >= MINNT && number <= MAXNT))
    {
        ft_putstr_fd("Error\n", 2);
        return (1);
    }
    return (0);
}