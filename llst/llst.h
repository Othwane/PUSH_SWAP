#ifndef	LLST_H
#define LLST_H
#include "unistd.h"
// #include "../inc/push_swap.h"

typedef	struct	s_node
{
	int value;
	int index;
	struct	s_node *next;
}	t_node;

t_node	*ft_lstnew(t_node *list, int content);
t_node	*ft_lstlast(t_node *lnode);
int		ft_lstsize(t_node *list);
void	ft_lstadd_f(t_node **list, t_node *nnode);
void	ft_lstadd_b(t_node **list, t_node *nnode);

#endif
