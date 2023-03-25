#include "../inc/push_swap.h"

int ifsign(char x)
{
    if (x == 45 || x == 43 || ft_isdigit(x))
        return (1);
    return (0);
}

int ifnum(char *string)
{
    int i;

    i = 1;
    if (!string || !string[0] || !ifsign(string[0]))
        return (0);
    while(i < ft_strlen(string))
    {
        if (!ft_isdigit(string[i]))
            return (0);
        i++;
    }
    return (1);
}

int ifdup(t_all *all, int number)
{
    t_node *temp;

    temp = all->a_stack;
    while(temp)
    {
        if (temp->value == number)
            return (1);
        temp = temp->next;
    }
    return (0);
}
void    exit_s(t_all *all)
{
    t_node *to_f;
    t_node *nexto_f;

    nexto_f = all->a_stack;
    while (nexto_f)
    {
        to_f = nexto_f;
        nexto_f = nexto_f->next;
        free(to_f);
    }
    nexto_f = all->b_stack;
    while (nexto_f)
    {
        to_f = nexto_f;
        nexto_f = nexto_f->next;
        free(to_f);
    }
    exit(0);
}

void    condition_s(t_all *all, char **argv, long long number)
{
    if ((ifdup(all, number)) || (number > MAXNT || number < MINNT) || (!ifnum(*argv)))
    {
        ft_putstr_fd("Error\n", 1);
        exit_s(all);
    }
}
