/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:31:00 by buramert          #+#    #+#             */
/*   Updated: 2025/02/09 21:38:12 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(stack **head)
{
    stack *first;
    stack *last;

    if (!head || !*head || !(*head)->next)
        return;
    last = *head;
    first = *head;
    while (last->next->next = NULL)
    {
        last = last->next;
    }
    
}