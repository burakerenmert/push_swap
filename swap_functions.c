/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:29:34 by buramert          #+#    #+#             */
/*   Updated: 2025/02/09 00:54:05 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_functions(stack1 **head)
{
    sa(head);
}
void    sa(stack1 **head)
{
    stack1 *first;
    stack1 *second;
    
    if(!head || !*head || !(*head)->next)
        return;
    first = *head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *head = second;
}
void    sb(stack2 **head)
{
    stack2 *first;
    stack2 *second;

    if(!head || !*head || !(*head)->next)
        return;
    first = *head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *head = second;
}
void    ss(stack1 **head_a, stack2 **head_b)
{
    sa(head_a);
    sb(head_b);
}
