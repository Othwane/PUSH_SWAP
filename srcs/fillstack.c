/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:34:30 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/08 03:20:25 by omajdoub         ###   ########.fr       */
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
        temp = ft_strjoin(temp, argv[i++]);   
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
   
    while(all->args[i] != '\0')
    {
        number = ft_atol(all->args[i]);
        if (conditions(all, &all->args[i], number))
           return ;
		tmp = (t_node *)malloc(sizeof(t_node));
        tmp->value = (int)number;
		tmp->next = NULL;
		tmp->index = argc - i;
		ft_lstadd_b(&all->a_stack, tmp);
		i++;
    }
    while (all->a_stack)
    {
        printf("%d\n", all->a_stack->value);
        all->a_stack = all->a_stack->next;
    }
    
}












    // while(i < argc)
    // {
    //     ++argv;
    //     number = ft_atol(*argv);
    //     conditions(all, *argv, number);
	// 	tmp = (t_node *)malloc(sizeof(t_node));
    //     tmp->value = (int)number;
	// 	tmp->next = NULL;
	// 	tmp->index = argc - i;
	// 	ft_lstadd_b(&all->a_stack, tmp);
	// 	i++;
    // }
//}

// int main(int argc, char **argv)
// {
//     int i = 0;
//     t_all all;
    
//     fill_stack(argc, argv, &all);
//}