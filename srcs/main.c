/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:54:37 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/07 22:33:36 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
    t_all all;
    
    if (argc > 1)
    {
        fill_stemp(argc, argv, &all);
        fill_stack(argc, argv, &all);
    }
} 