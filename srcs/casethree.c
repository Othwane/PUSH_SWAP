/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casethree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:33:15 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 23:52:48 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	twonumber_case(t_all *all)
{
	if (all->a_stack->value < all->a_stack->next->value)
		exit(0);
	ra(all);
}

int	checkifsorted(t_all *all)
{
	t_node	*temp;

	temp = all->a_stack;
	while (temp->next != NULL)
	{
		if (temp->value > temp->next->value)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	f_case(t_all *all)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (all->a_stack->value > all->a_stack->next->value && \
				all->a_stack->next->value < all->a_stack->next->next->value && \
				all->a_stack->value > all->a_stack->next->next->value)
		{
			ra (all);
			break ;
		}
		if (all->a_stack->value > all->a_stack->next->value)
			sa (all);
		if (all->a_stack->next->value > all->a_stack->next->next->value)
			rra (all);
		i++;
	}
}

void	s_case(t_all *all)
{
	int	i;

	i = 1;
	while (i <= 2)
	{
		if (all->a_stack->index == i)
		{
			pb (all);
			i++;
		}
		else
			rra (all);
	}
	f_case(all);
	pa (all);
	pa (all);
}

void	sorting(t_all *all)
{
	if (ft_lstsize(all->a_stack) == 2)
		twonumber_case(all);
	else if (ft_lstsize(all->a_stack) == 3)
		f_case(all);
	else if (ft_lstsize(all->a_stack) == 5)
		s_case(all);
	else
		l_case(all);
}
