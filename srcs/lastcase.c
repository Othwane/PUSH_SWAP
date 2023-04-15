/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastcase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:15:47 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 02:51:58 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	l_case(t_all *all)
{
	int	max_r;
	int	mini_r;
	int	max_index;

	mini_r = 1;
	max_index = ft_lstsize (all->a_stack);
	if (max_index <= 100)
		max_r = 16;
	else
		max_r = 40;
	f_step(all, mini_r, max_r);
	s_step(all, max_index);
}

void	f_step(t_all *all, int mini_r, int max_r)
{
	int	max_rank;

	max_rank = ft_lstsize (all->a_stack);
	while (all->a_stack)
	{
		if (all->a_stack->index >= mini_r && all->a_stack->index <= max_r)
		{
			pb (all);
			if (max_r++ < max_rank)
				mini_r++;
		}
		else if (all->a_stack->index < mini_r)
		{
			pb (all);
			rb (all);
			if (max_r++ < max_rank)
				mini_r++;
		}
		else if (all->a_stack->index > max_r)
			ra (all);
	}
}

void	s_step(t_all *all, int max_r)
{
	t_node	*tmp;
	int		i;

	tmp = all->b_stack;
	while (all->b_stack)
	{
		i = 1;
		tmp = all->b_stack;
		while (tmp && tmp->index < max_r)
		{
			i++;
			tmp = tmp->next;
		}
		if (all->b_stack->index == max_r)
		{
			max_r--;
			pa (all);
			i = 1;
		}
		else if (i <= (ft_lstsize(all->b_stack)) / 2)
			rb (all);
		else
			rrb (all);
	}
}

int	n_instack(t_all *all)
{
	int		i;
	t_node	*nnode;

	i = 0;
	nnode = all->a_stack;
	while (nnode)
	{
		i++;
		nnode = nnode->next;
	}
	return (i);
}
