/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:26:23 by burakerenme       #+#    #+#             */
/*   Updated: 2025/02/27 21:40:49 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(stack *a)
{
	int max;
	
	max = a->index;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	return (max);
}
int calculate_max_bits(int max)
{
	int bits;

	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
void radix_sort(stack **a, stack **b)
{
	if (!a || !*a)
		return;
	int max;
	int max_bits;
	int i;
	int j;
	int size;

	max = find_max_index(*a);
	max_bits = calculate_max_bits(max);
	i = 0;
	size = max + 1;
	while (i < max_bits)
	{
        j = 0;

		while (j < size)
		{
            if ((*a) && (((*a)->index >> i) & 1))
                ra(a);
			else if (*a)
				pb(a, b);
			j++;
        }
        while (*b)
		{
            pa(a, b);
        }
        i++;
    }
}
