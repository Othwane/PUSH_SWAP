/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:34:30 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/11 17:08:25 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char **fill_stemp(int argc, char **argv, t_all *all)
{
    int i;
    char *temp;
    
    i = 1;
    temp = malloc(1);
    while (argv[i])
    {
        temp = ft_strjoin(temp, argv[i++]);
    }
    all->args = ft_split(temp, ' ');
    return (all->args);
}


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
    fill_stemp(argc, argv, all);
    while(all->args[i] != '\0')
    {
        number = ft_atol(all->args[i]);
        if (conditions(all, &all->args[i], number))
        {
            ft_putstr_fd("Error\n", 2);
            exit(0);
        }
		tmp = (t_node *)malloc(sizeof(t_node));
        tmp->value = (int)number;
		tmp->next = NULL;
		tmp->index = 0;
		ft_lstadd_b(&all->a_stack, tmp);
		i++;
    }
}
