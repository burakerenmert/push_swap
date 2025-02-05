/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:20:28 by burakerenme       #+#    #+#             */
/*   Updated: 2025/02/05 05:03:02 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_duplicate(int num)
{
    static int *arr;
    static int c;
    int i;
    int j;

    i = 0;
    if (!arr)
        arr = malloc(sizeof(int) * c);
    arr[c] = num;
    c++;
    while (i < c)
    {
        j = (i + 1);
        while (arr[i] != arr[j] && j < c)
        {
            j++;
        }
        if (arr[i] == arr[j])
        {
            printf("Error\n");
            free (arr);
            exit(1);
        }
        i++;
    }
}