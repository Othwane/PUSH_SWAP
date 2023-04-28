/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casethree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:33:15 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/28 21:40:24 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	twonumber_case(t_all *all)
{
	if (all->a_stack->value < all->a_stack->next->value)
		exit(1);
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
	if (!checkifsorted(all))
		exit(0);
	while (i <= 2)
	{
		if (all->a_stack->index == i)
		{
			pb (all);
			i++;
		}
		else if (all->a_stack->next->index == 1)
			ra (all);
		else
			rra(all);
	}
	f_case(all);
	pa (all);
	pa (all);
}

void	x_case(t_all *all)
{
	int	i;
	int	ii;

	i = 2;
	ii = 1;
	if (!checkifsorted(all))
		exit(0);
	while (i <= 2)
	{
		if (all->a_stack->index == ii)
		{
			pb (all);
			i++;
		}
		else
			rra (all);
	}
	f_case(all);
	pa (all);
}
