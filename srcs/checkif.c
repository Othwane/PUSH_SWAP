/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkif.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:24:13 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/16 04:40:45 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	conditions(t_all *all, char **args, long long number)
{
	if (*args == '\0')
		errorf();
	if (cifnum(args))
		return (1);
	if (cifn_bigger_smaller(number))
		return (1);
	if (cifdup(args))
		return (1);
	return (0);
}

int	cifsign(char x)
{
	if (x == 45 || x == 43 || ft_isdigit(x))
		return (1);
	return (0);
}

int	cifnum(char **argv)
{
	int	i;
	int	ii;

	i = 0;
	while (argv[i])
	{
		ii = 0;
		while (argv[i][ii] != 0)
		{
			if ((argv[i][ii] == '-' || argv[i][ii] == '+') && ii == 0)
				ii++;
			if (ft_isdigit(argv[i][ii]) == 0)
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			ii++;
		}
		i++;
	}
	return (0);
}

int	cifdup(char **argv)
{
	int			i;
	int			ii;
	long long	tempi;
	long long	tempii;

	i = 0;
	while (argv[i])
	{
		ii = 0;
		tempi = ft_atol(argv[i]);
		while (argv[ii])
		{
			tempii = ft_atol(argv[ii]);
			if (tempii == tempi && i != ii)
				return (1);
			ii++;
		}
		i++;
	}
	return (0);
}

int	cifn_bigger_smaller(long long number)
{
	if (! (number >= MINNT && number <= MAXNT))
		return (1);
	return (0);
}
