/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:24:32 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 07:07:40 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../operations/operations.h"

void    pa(t_all *all)
{
    t_node *temp;

    if(!all->b_stack)
        return (NULL);
    temp = all->b_stack;
    all->b_stack = all->b_stack->next;
    temp->next = all->a_stack;
    all->a_stack = temp;
}

void    pb(t_all *all)
{
    t_node *temp;

    if(!all->a_stack)
        return (NULL);
    temp = all->a_stack;
    all->a_stack = all->a_stack->next;
    temp->next = all->b_stack;
    all->b_stack = temp;
}
