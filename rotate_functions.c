/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:31:34 by buramert          #+#    #+#             */
/*   Updated: 2025/02/09 21:24:44 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_functions(stack **head_a, stack **head_b)
{
	rr(head_a, head_b);
}
void    ra(stack **head)
{
    stack *first;
    stack *last;

    if (!head || !*head || !(*head)->next)
        return;
    last = *head;
    first = *head;
    while(last->next != NULL)
    {
        last = last -> next;
    }
	*head = first->next;
    first->next = NULL;
    last->next = first;
}
void    rb(stack **head)
{
    stack *first;
    stack *last;

    if (!head || !*head || !(*head)->next)
        return;
    last = *head;
    first = *head;
    while(last->next != NULL)
    {
        last = last -> next;
    }
	*head = first->next;
    first->next = NULL;
    last->next = first;
}
void	rr(stack **head_a, stack **head_b)
{
	ra(head_a);
	rb(head_b);
}