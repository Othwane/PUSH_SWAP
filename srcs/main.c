/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:54:37 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/15 01:10:37 by omajdoub         ###   ########.fr       */
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
		sorting(&all);
	}
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
