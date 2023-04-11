/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:54:37 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/11 17:03:25 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
    int i = 0;
    t_all all;
    
    if (argc > 1)
    {
        all.a_stack = NULL;
        all.b_stack = NULL;
        fill_stack(argc, argv, &all);
        indexoperations(all.a_stack, all.size);
        howmanyargs(&all);
    }
}
