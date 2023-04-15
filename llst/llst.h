/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:17:32 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/14 02:21:13 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LLST_H
# define LLST_H

# include "unistd.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

int			ft_lstsize(t_node *list);
void		ft_lstadd_f(t_node **list, t_node *nnode);
void		ft_lstadd_b(t_node **list, t_node *nnode);
t_node		*ft_lstnew(t_node *list, int content);
t_node		*ft_lstlast(t_node *lnode);
#endif
