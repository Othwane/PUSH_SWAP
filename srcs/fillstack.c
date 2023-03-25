/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:34:30 by omajdoub          #+#    #+#             */
/*   Updated: 2023/03/25 05:12:00 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    fill_stack(int argc, char **argv, t_all *all)
{
    int i;
    t_node *tmp;
    long long number;
    
    i = 0;
	argc--;
    all->a_stack = NULL;
    all->b_stack = NULL;
    all->size = argc;
    while(i < argc)
    {
        ++argv;
        number = ft_atol(*argv);
        condition_s(all, argv, number);
		tmp = (t_node *)malloc(sizeof(t_node));
        tmp->value = (int)number;
		tmp->next = NULL;
		tmp->index = argc - i;
		ft_lstadd_b(&all->a_stack, tmp);
		i++;
    }
    
}
