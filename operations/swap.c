/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:24:44 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/27 07:56:11 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    sa(t_all *all)
{
    int temp;

    if(all->a_stack && all->a_stack->next)
    {
        temp = all->a_stack->value;
        all->a_stack->value = all->a_stack->next->value;
        all->a_stack->next->value = temp;
    }
}

void    sb(t_all *all)
{
    int temp;

    if(all->b_stack && all->b_stack->next)
    {
        temp = all->b_stack->value;
        all->b_stack->value = all->b_stack->next->value;
        all->b_stack->next->value = temp;
    }
}

void    ss(t_all *all)
{
    sa(all);
    sb(all);
}
