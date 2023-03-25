/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 04:36:52 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 04:39:45 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atol(const char *s)
{
	int	i;
	long long   result;
	long long   sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((s[i] != '\0') && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
		i++;
	if (s[i] == 45 || s[i] == 43)
	{
		if (s[i] == 45)
			sign = -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		result *= 10;
		result += (s[i] - 48);
		i++;
	}
	return (result * sign);
}