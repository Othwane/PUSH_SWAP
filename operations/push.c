/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:24:32 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 02:24:35 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_all *all)
{
	t_node	*temp;

	if (!all->b_stack)
		return ;
	temp = all->b_stack;
	all->b_stack = all->b_stack->next;
	temp->next = all->a_stack;
	all->a_stack = temp;
	all->size--;
	write (1, "pa\n", 3);
}

void	pb(t_all *all)
{
	t_node	*temp;

	if (!all->a_stack)
		return ;
	temp = all->a_stack;
	all->a_stack = all->a_stack->next;
	temp->next = all->b_stack;
	all->b_stack = temp;
	all->size--;
	write (1, "pb\n", 3);
}
