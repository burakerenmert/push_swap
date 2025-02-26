/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:26:23 by burakerenme       #+#    #+#             */
/*   Updated: 2025/02/26 04:48:21 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Finds the largest index in the stack
int find_max_index(stack *a) {
    int max = a->index;
    while (a) {
        if (a->index > max)
            max = a->index;
        a = a->next;
    }
    return max;
}

// Calculates the number of bits needed for the largest index
int calculate_max_bits(int max) {
    int bits = 0;
    while ((max >> bits) != 0)
        bits++;
    return bits;
}

// Radix sort implementation using indexes
void radix_sort(stack **a, stack **b) {
    if (!a || !*a) {
        printf("Stack A is empty!\n");
        return;
    }

    int max = find_max_index(*a);  // Find the largest index
    int max_bits = calculate_max_bits(max);  // Calculate the number of bits required
    int i = 0;

    while (i < max_bits) {
        int size = max + 1;  // Number of elements in stack A is max index + 1
        int j = 0;

        // Move elements based on the current bit in their index
        while (j < size) {
            if ((*a) && (((*a)->index >> i) & 1)) {
                ra(a);  // Rotate A if the bit is 1
            } else if (*a) {
                pb(a, b);  // Push to B if the bit is 0
            }
            j++;
        }

        // Push elements from B back to A in the correct order
        while (*b) {
            pa(a, b);  // Push all elements back to A
        }

        i++;
    }
}

