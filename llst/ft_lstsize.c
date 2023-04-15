/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:16:14 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 02:15:18 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../llst/llst.h"

int	ft_lstsize(t_node *list)
{
	int	i;

	i = 0;
	if (!list)
		return (0);
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
