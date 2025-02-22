/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:31:00 by buramert          #+#    #+#             */
/*   Updated: 2025/02/22 17:20:03 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_functions(stack **head_a, stack **head_b)
{
	rrr(head_a, head_b);
}
void    rra(stack **head)
{
    stack *prev;
    stack *last;

    if (!head || !*head || !(*head)->next)
        return;
    
    last = *head;
    prev = NULL;
    
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    
    prev->next = NULL;
    last->next = *head;
    *head = last;
}
void    rrb(stack **head)
{
    stack *prev;
    stack *last;

    if (!head || !*head || !(*head)->next)
        return;
    
    last = *head;
    prev = NULL;
    
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    
    prev->next = NULL;
    last->next = *head;
    *head = last;
}
void	rrr(stack **head_a, stack **head_b)
{
	rra(head_a);
	rrb(head_b);
}
