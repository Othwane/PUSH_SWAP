#ifndef	PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include "../llst/llst.h"
// #include "../operations/operations.h"
#include <unistd.h>
#include <stdio.h>

#define MAXNT 2147483647
#define MINNT -2147483648

typedef	struct	s_all {
	t_node *a_stack;
	t_node *b_stack;
	int	size;
}	t_all;

void    fill_stack(int argc, char **argv, t_all *all);
int 	ifsign(char x);
int 	ifnum(char *string);
int 	ifdup(t_all *all, int number);
void    condition_s(t_all *all, char **argv, long long number);

#endif

