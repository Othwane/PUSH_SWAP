/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:42:28 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 07:26:04 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../llst/llst.h"

void	ft_lstadd_f(t_node **list, t_node *nnode)
{
	if (!*list)
	{
		*list = nnode;
		nnode->next = NULL;
		return ;
	}
	nnode->next = *list;
	*list = nnode;
}
