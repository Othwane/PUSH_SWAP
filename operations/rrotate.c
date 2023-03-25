/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:37:03 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 07:08:02 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../operations/operations.h"

void    rra(t_all *all)
{
    t_node *l_elem;
    t_node *temp;
    
    if (all->a_stack && all->a_stack->next)
    {
        temp = all->a_stack;
        while (temp->next->next)
            temp = temp->next;
        l_elem = temp->next;
    }
}

void    rrb(t_all *all)
{
    t_node *l_elem;
    t_node *temp;
    
    if (all->b_stack && all->b_stack->next)
    {
        temp = all->b_stack;
        while (temp->next->next)
            temp = temp->next;
        l_elem = temp->next;
    }
}

void    rrr(t_all *all)
{
    rra(all);
    rrb(all);
}
