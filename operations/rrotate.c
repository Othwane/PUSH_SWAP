/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:37:03 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 02:31:38 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_all *all)
{
	t_node	*l_elem;
	t_node	*temp;

	if (all->a_stack && all->a_stack->next)
	{
		temp = all->a_stack;
		while (temp->next->next)
			temp = temp->next;
		l_elem = temp->next;
		temp->next = NULL;
		l_elem->next = all->a_stack;
		all->a_stack = l_elem;
		write (1, "rra\n", 4);
	}
}

void	rrb(t_all *all)
{
	t_node	*l_elem;
	t_node	*temp;

	if (all->b_stack && all->b_stack->next)
	{
		temp = all->b_stack;
		while (temp->next->next)
			temp = temp->next;
		l_elem = temp->next;
		temp->next = NULL;
		l_elem->next = all->b_stack;
		all->b_stack = l_elem;
		write (1, "rrb\n", 4);
	}
}

void	rrr(t_all *all)
{
	rra (all);
	rrb (all);
	write (1, "rrr\n", 3);
}
