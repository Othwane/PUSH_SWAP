/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:48:08 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 21:41:31 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../llst/llst.h"

t_node	*ft_lstnew(t_node *list, int content)
{
	t_node	*nnode;

	if (!nnode == malloc(sizeof(t_node)))
		return (0);
	if (!content)
		nnode->value = 0;
	nnode->value = content;
	nnode->next = NULL;
	return (nnode);
}
