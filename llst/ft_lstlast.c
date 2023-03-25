/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:01:38 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/21 07:26:07 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../llst/llst.h"

t_node	*ft_lstlast(t_node *lnode)
{
	if (!lnode)
		return (0);
	while (lnode->next)
	{
		lnode = lnode->next;
	}
	return (lnode);
}
