/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:24:19 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/10 20:59:19 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/push_swap.h"


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
        write(1,"ra\n",3);
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
        write(1,"rb\n",3);
    }
}

void    rr(t_all *all)
{
    ra(all);
    rb(all);
    write(1,"rr\n",3);
}
