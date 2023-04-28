/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:57:12 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/28 21:33:00 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../llst/llst.h"

void	ft_lstadd_b(t_node **list, t_node *nnode)
{
	if (!*list)
		*list = nnode;
	else
		ft_lstlast(*list)->next = nnode;
}
