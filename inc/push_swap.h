#ifndef	PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include "../libft/libft.h"
#include "../llst/llst.h"
#include <unistd.h>
#include <stdlib.h>

#define MAXNT 2147483647
#define MINNT -2147483648


typedef	struct	s_all {
	t_node *a_stack;
	t_node *b_stack;
	char **args;
	int	size;
}	t_all;

void    sa(t_all *all);
void    sb(t_all *all);
void    ss(t_all *all);

void	pa(t_all *all);
void	pb(t_all *all);

void    ra(t_all *all);
void    rb(t_all *all);
void    rr(t_all *all);

void    rra(t_all *all);
void    rrb(t_all *all);
void    rrr(t_all *all);

void    fill_stack(int argc, char **argv, t_all *all);
int 	cifsign(char x);
int conditions(t_all *all, char **args, long long number);
// void    exit_s(t_all *all);

void    f_case(t_all *all);
// int len_s(char **argv);

char **fill_stemp(int argc, char **argv, t_all *all);
// int check_c(char **args);

int cifnum(char **argv);
int cifdup(char **argv);
int cifn_bigger_smaller(long long number);
// int s_len(t_all *all);


int smallest(t_node *stack, int index);

// void    exit_s(t_all *all);

int n_instack(t_all *all);


void    howmanyargs(t_all *all);


int checkifsorted(t_all *all);






void    indexoperations(t_node *stack, int ssize);



#endif
