/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:54:37 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/16 04:58:25 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_all	all;

	if (argc > 1)
	{
		all.a_stack = NULL;
		all.b_stack = NULL;
		fill_stack(argc, argv, &all);
		indexoperations(all.a_stack, all.size);
		sorting(&all, argv);
	}
}

void	sorting(t_all *all, char **argv)
{
	if (ft_lstsize(all->a_stack) == 1)
		exit(0);
	else if (ft_lstsize(all->a_stack) == 2)
		twonumber_case(all);
	else if (ft_lstsize(all->a_stack) == 3)
		f_case(all);
	else if (ft_lstsize(all->a_stack) == 4)
		x_case(all);
	else if (ft_lstsize(all->a_stack) == 5)
		s_case(all);
	else
		l_case(all);
}

void	exit_s(t_all *all)
{
	t_node	*to_f;
	t_node	*nexto_f;

	nexto_f = all->a_stack;
	while (nexto_f)
	{
		to_f = nexto_f;
		nexto_f = nexto_f->next;
		free(to_f);
	}
	nexto_f = all->b_stack;
	while (nexto_f)
	{
		to_f = nexto_f;
		nexto_f = nexto_f->next;
		free(to_f);
	}
	exit(0);
}
