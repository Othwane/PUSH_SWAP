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

int cifsign(char x)
{
    if (x == 45 || x == 43 || ft_isdigit(x))
        return (1);
    return (0);
}

void    error_f(void)
{
    ft_putstr_fd("Error\n", 2);
    return ;
}

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
            if (!argv[args][arg] || !argv[args][arg] || !cifsign(argv[args][arg]))
                return (1);
            if (argv[args][arg] == 43 || argv[args][arg] == 45)
                arg++;
            if (!(argv[args][arg] >= 48 && argv[args][arg] <= 57))
                return (1);
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
                return (1);
            ii++;
        }
        i++;
    }
    return (0);
}

int cifn_bigger_smaller(long long number)
{
    if(!(number >= MINNT && number <= MAXNT))
        return (1);
    return (0);
}



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
