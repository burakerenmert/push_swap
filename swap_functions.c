/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:29:34 by buramert          #+#    #+#             */
/*   Updated: 2025/03/02 03:03:22 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(stack **head)
{
    stack *first;
    stack *second;
    
    if(!head || !*head || !(*head)->next)
        return;
    first = *head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *head = second;
    ft_printf("sa\n");
}
void    sb(stack **head)
{
    stack *first;
    stack *second;

    if(!head || !*head || !(*head)->next)
        return;
    first = *head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *head = second;
    ft_printf("sb\n");
}
void    ss(stack **head_a, stack **head_b)
{
    sa(head_a);
    sb(head_b);
    ft_printf("ss\n");
}
