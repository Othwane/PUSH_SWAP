#ifndef	LLST_H
#define LLST_H

// #include "../inc/push_swap.h"

typedef	struct	s_node
{
	int value;
	int index;
	struct	s_node *next;
}	t_node;

t_node	*ft_lstnew(void *content);
t_node	*ft_lstlast(t_node *lnode);
int		ft_lstsize(t_node *list);
void	ft_lstadd_f(t_node **list, t_node *nnode);
void	ft_lstadd_b(t_node **list, t_node *nnode);

#endif
