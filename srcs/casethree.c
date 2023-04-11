/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casethree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:33:15 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/11 17:23:56 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    twonumber_case(t_all *all)
{
    if (all->a_stack->value < all->a_stack->next->value)
            return ;
        ra(all);
}

int n_instack(t_all *all)
{
    int i;
    t_node *nnode;

    i = 0;
    nnode = all->a_stack;
    while (nnode)
    {
        i++;
        nnode = nnode->next;
    }
    return (i);
}

void    f_case(t_all *all)
{
    if (all->a_stack->value < all->a_stack->next->value
        && all->a_stack->next->value < all->a_stack->next->next->value)
            return ;
    if (all->a_stack->value > all->a_stack->next->value 
        && all->a_stack->value < all->a_stack->next->next->value)
                sa(all);
    else if (all->a_stack->value > (all->a_stack->next->value && all->a_stack->next->next->value)
            && all->a_stack->next->value > all->a_stack->next->next->value)
                {
                    sa(all);
                    rra(all);
                }
    else if (all->a_stack->value > (all->a_stack->next->value && all->a_stack->next->next->value)
        && all->a_stack->next->value < all->a_stack->next->next->value)
                    ra(all);
    else if (all->a_stack->next->value > (all->a_stack->value && all->a_stack->next->next->value)
            && all->a_stack->value < all->a_stack->next->next->value)
        {
            sa(all);
            ra(all);            
        }
    else
            rra(all);
}

int checkifsorted(t_all *all)
{
    t_node *temp;

    temp = all->a_stack;
    while (temp->next)
    {
        if (temp->value < temp->next->value
            && temp->next->value < temp->next->next->value)
            {
                temp = temp->next;
                if (!temp->next)
                    return (0);
                break;
            }
        else
            return (1);
    }
    return (0);
}


void    s_case(t_all *all)
{
    int i;
    int index;
    int findex;

    i = 0;
    findex = 1;
    while (i < 2)
    {
        index = smallest(all->a_stack, findex);
        if (all->a_stack->index == findex)
        {
            pb(all);
            i++;
        }
        else if (index < 3)
            ra(all);
        rra(all);
    }
}


int smallest(t_node *stack, int index)
{
    int i;

    i = 1;
    while (stack->next)
    {
        if (stack->index != index)
        {
            i++;
            stack = stack->next;
        }
    }
    return (i);
}

void    howmanyargs(t_all *all)
{
    if (ft_lstsize(all->a_stack) == 2)
        twonumber_case(all);
    else if (ft_lstsize(all->a_stack) == 3)
        f_case(all);
    else if (ft_lstsize(all->a_stack) == 5)
        s_case(all);
    // else if (ft_lstsize(all->a_stack)  <= 100)
    //     t_case();
//     else if (ft_lstsize(all->a_stack)  <= 500)
//         l_case();
}
