/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:29:34 by buramert          #+#    #+#             */
/*   Updated: 2025/02/09 19:15:04 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_functions(stack **head_a, stack **head_b)
{
    sa(head_a);
    sb(head_b);
}
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
}
void    ss(stack **head_a, stack **head_b)
{
    sa(head_a);
    sb(head_b);
}
