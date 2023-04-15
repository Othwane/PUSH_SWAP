/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:34:30 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/15 01:05:00 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdio.h>

void	fill_stemp(int argc, char **argv, t_all *all)
{
	int		i;
	char	*temp;

	i = 1;
	temp = malloc(sizeof(char));
	while (argv[i])
		temp = ft_strjoin(temp, argv[i++]);
	all->args = ft_split(temp, 32);
	free(temp);
}

void	fill_stack(int argc, char **argv, t_all *all)
{
	int			i;
	t_node		*tmp;
	long long	number;

	i = 0;
	argc--;
	fill_stemp(argc, argv, all);
	if (!all->args[0])
	{
		ft_putstr_fd("Error\n", 2);
		exit(0);
	}
	while (all->args[i])
	{
		number = ft_atol(all->args[i]);
		if (conditions(all, &all->args[i], number))
		{
			ft_putstr_fd("Error\n", 2);
			exit_s(all);
		}
		tmp = (t_node *)malloc(sizeof(t_node));
		tmp->value = (int)number;
		tmp->next = NULL;
		tmp->index = 0;
		ft_lstadd_b(&all->a_stack, tmp);
		i++;
	}
	all->size = n_instack(all);
}

void	errorf(void)
{
	
}