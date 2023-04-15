/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:31:46 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 02:10:56 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*new_s;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	new_s = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	while (s1[j])
	{
		new_s[j] = s1[j];
		j++;
	}
	new_s[j] = ' ';
	j++;
	while (s2[i])
	{
		new_s[j] = s2[i];
		j++;
		i++;
	}
	new_s[j] = '\0';
	free(s1);
	return (new_s);
}
