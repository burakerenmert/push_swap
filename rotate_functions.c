/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:31:34 by buramert          #+#    #+#             */
/*   Updated: 2025/03/02 03:03:13 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    ft_printf("ra\n");
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
    ft_printf("rb\n");
}
void	rr(stack **head_a, stack **head_b)
{
	ra(head_a);
	rb(head_b);
    ft_printf("rr\n");
}