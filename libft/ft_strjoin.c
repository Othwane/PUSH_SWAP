/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:31:46 by omajdoub          #+#    #+#             */
/*   Updated: 2022/10/30 21:42:00 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	char	*new_s;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	new_s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	while (*s1)
		new_s[i++] = *s1++;
	while (*s2)
		new_s[i++] = *s2++;
	new_s[i] = '\0';
	return (new_s);
}
