/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casethree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajdoub <omajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:33:15 by omajdoub          #+#    #+#             */
/*   Updated: 2023/04/05 21:01:38 by omajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// void fcase(t_all *all)
// {
//     int min;
//     int secmin;
//     min = all->a_stack->value;
//     if (all->a_stack->next->value < all->a_stack->next->next->value)
//         secmin = all->a_stack->next->value;
//     else
//     {
//           secmin = all->a_stack->next->next->value;
//     }
//     sa(all);
//     while(all->a_stack)
//     {
//         printf("%d\n", all->a_stack->value);
//         all->a_stack = all->a_stack->next;
//     }
// }

// void    scase(t_all *all)
// {
//     int min;
//     int secmin;
//     min = all->a_stack->next->value;
//     if (all->a_stack->value < all->a_stack->next->next->value)
//         secmin = all->a_stack->value;
//     else
//         secmin = all->a_stack->next->next->value;
//     printf("%d---%dhadii", min, secmin);  
// }

// void    tcase(t_all *all)
// {
//     int min;
//     int secmin;
//     min = all->a_stack->next->next->value;
//     if (all->a_stack->next->value < all->a_stack->value)
//        secmin = all->a_stack->next->value;
//     else
//         secmin = all->a_stack->value;
//     printf("%d---%dhadiii", min, secmin);
// }

// void	casethree(t_all *all)
// {
//     int min;
//     int secmin;
//     //           first       <        second              && second    <     third
//     if ((all->a_stack->value < all->a_stack->next->value) 
//         && (all->a_stack->next->value < all->a_stack->next->next->value))
//                     return ;
//     //               first        <      second               &&  second > third 
//     else if ((all->a_stack->value < all->a_stack->next->value) 
//                 && (all->a_stack->next->value > all->a_stack->next->next->value))
//                 {
//                     rra(all);
//                     sa(all);
//                     while(all->a_stack)
//                     {
//                        printf("%d\n--", all->a_stack->value);
//                         all->a_stack = all->a_stack->next;
//                     }
//                 }    
//     //             first                     <         second             &&   second    <    third 
//     else if ((all->a_stack->value > all->a_stack->next->value) 
//                 && (all->a_stack->next->value < all->a_stack->next->next->value))
//                 {
//                     sa(all);
//                     while(all->a_stack)
//                     {
//                        printf("---%d\n", all->a_stack->value);
//                         all->a_stack = all->a_stack->next;
//                     }
//                 }
//     else if ((all->a_stack->value > all->a_stack->next->value) 
//             && (all->a_stack->next->value < all->a_stack->next->next->value) 
//             && (all->a_stack->value < all->a_stack->next->next->value))
//     {
//         ra(all);
//        while(all->a_stack)
//         {
//             printf("--*--%d\n", all->a_stack->value);
//             all->a_stack = all->a_stack->next;
//         }
//     }
// }

// int     smallest(t_all *all)
// {
//     t_node *mini_n;
//     t_node *temp;
//     int ssize;
    
//     mini_n = all->a_stack;
//     temp = all->a_stack->next;
//     ssize = all->size;
//     while (ssize != ZERO)
//     {
//         if (mini_n->value > temp->value && mini_n->next != NULL)
//         {
//             mini_n = mini_n->next;
//             if (temp->next != NULL)
//                 temp = temp->next;
//         }
//         else if (mini_n->value < temp->value && temp->next != NULL)
//             temp = temp->next;
//         ssize--;
//     }
//     return (mini_n->value);
// }


void    f_case(t_all *all)
{
    if (all->a_stack->value < all->a_stack->next->value
        && all->a_stack->next->value < all->a_stack->next->next->value)
            return ;
    if (all->a_stack->value > all->a_stack->next->value 
        && all->a_stack->value < all->a_stack->next->next->value)
                    {
                        sa(all);
                        while (all->a_stack)
                        {
                            printf("\n-%d----\n",all->a_stack->value);
                            all->a_stack = all->a_stack->next;
                        }
                    }
    else if (all->a_stack->value > all->a_stack->next->value 
            && all->a_stack->value > all->a_stack->next->next->value
            && all->a_stack->next->value > all->a_stack->next->next->value)
                {
                    sa(all);
                    rra(all);
                    while (all->a_stack)
                    {
                        printf("\n-%d-=\n",all->a_stack->value);
                        all->a_stack = all->a_stack->next;
                    }
                    
                }
    else if (all->a_stack->value > (all->a_stack->next->value && all->a_stack->next->next->value)
        && all->a_stack->next->value < all->a_stack->next->next->value)
                {
                    ra(all);
                    while (all->a_stack)
                    {
                        printf("\n-%d--\n",all->a_stack->value);
                        all->a_stack = all->a_stack->next;
                    }
                }
    else if (all->a_stack->next->value > (all->a_stack->value && all->a_stack->next->next->value)
            && all->a_stack->value < all->a_stack->next->next->value)
        {
            sa(all);
            ra(all);
            while (all->a_stack)
            {
                printf("\n-%d-+\n",all->a_stack->value);
                all->a_stack = all->a_stack->next;
            }
        }
    else
            {
                rra(all);
                while (all->a_stack)
                {
                    printf("\n-%d-*\n",all->a_stack->value);
                    all->a_stack = all->a_stack->next;
                }
            }
}

// void    s_case(t_all *all)
// {
//     int x;
//     int number;
//     int i = 0;
//     x = all->size;
//     printf("%d+-+", x);
//     while(x > 3)
//     {
//         number = smallest(all);
//         if (number == all->a_stack->value)
//             {
//                 pb(all);
//                 number = smallest(all);
//                 if (number == all->a_stack->value)
//                     pb(all);
//                 ra(all);
//             }
//         ra(all);
//         x--;
//     }
// }