/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:33:02 by buramert          #+#    #+#             */
/*   Updated: 2025/02/27 22:53:46 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_array(stack **head)
{
	stack *first;
	int size;
	int *arr;
	int i;
	
	first = *head;
	size = 1;
	i = 0;
	while(first->next != NULL)
	{
		first = first->next;
		size++;
	}
	first = *head;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return;
	while (i < size)
	{
		arr[i++] = first->data;
		first = first->next;
	}
	bubble_sort(arr, size);
	get_index(*head, arr, size);
    free(arr);
}
void	bubble_sort(int *arr, int size)
{
    int swapped = 1;
    while (swapped)
    {
        swapped = 0;
        int i = 0;
        while (i < size - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
        size--;
    }
}
void	get_index(stack *head, int *arr, int size)
{
    stack *first;
    int i;

    first = head;
    while (first != NULL)
    {
        i = 0;
        while (i < size)
        {
            if (first->data == arr[i])
            {
                first->index = i;
                break;
            }
            i++;
        }
        first = first->next;
    }
}
