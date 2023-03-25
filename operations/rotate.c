/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:24:19 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 07:07:57 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../operations/operations.h"


void    ra(t_all *all)
{
    t_node *f_elem;
    t_node *temp;
    
    if (all->a_stack && all->a_stack->next)
    {
        f_elem = all->a_stack;
        all->a_stack = all->a_stack->next;
        temp = f_elem;
        while (temp->next)
            temp = temp->next;
        temp->next = f_elem;
        temp->next->next = NULL;
    }
}

void    rb(t_all *all)
{
    t_node *f_elem;
    t_node *temp;
    
    if (all->b_stack && all->b_stack->next)
    {
        f_elem = all->b_stack;
        all->b_stack = all->b_stack->next;
        temp = f_elem;
        while (temp->next)
            temp = temp->next;
        temp->next = f_elem;
        temp->next->next = NULL;
    }
}

void    rr(t_all *all)
{
    ra(all);
    rb(all);
}
