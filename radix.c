/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:26:23 by burakerenme       #+#    #+#             */
/*   Updated: 2025/02/27 20:46:36 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index (stack *a)
{
	int max = a->index;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	return max;
}
int calculate_max_bits(int max) {
	int bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
void radix_sort(stack **a, stack **b)
{
	if (!a || !*a)
		return;
	int max = find_max_index(*a);
	int max_bits = calculate_max_bits(max);
	int i = 0;

	while (i < max_bits)
	{
        int size = max + 1;
        int j = 0;

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