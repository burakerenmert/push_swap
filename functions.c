/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:29:34 by buramert          #+#    #+#             */
/*   Updated: 2025/02/08 20:38:25 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    functions(stack1 **head)
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
