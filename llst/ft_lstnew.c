/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:48:08 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/05 18:29:12 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../llst/llst.h"
#include <stdlib.h>

t_node	*ft_lstnew(t_node *list, int content)
{
	t_node	*nnode;

	if (!(nnode == malloc(sizeof(t_node))))
		return (0);
	if (!content)
		nnode->value = 0;
	nnode->value = content;
	nnode->next = NULL;
	return (nnode);
}
