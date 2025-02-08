/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:20:28 by burakerenme       #+#    #+#             */
/*   Updated: 2025/02/08 19:53:32 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     *alloc_arr(int *arr, int num, int c)
{
	int *arr2;
	int i;

	i = 0;
	arr2 = malloc(sizeof(int) * (c + 1));
	if (!arr2)
		return(NULL);
	while(i < c)
	{
		arr2[i] = arr[i];
		i++;
	}
	arr2[c] = num;
	free(arr);
	return(arr2);
}
void    check_duplicate(int num)
{
    static int *arr;
    static int	c;
    int			i;
    int			j;

    i = 0;
    if (!arr)
        arr = malloc(sizeof(int) * 1);
	else
		arr = alloc_arr(arr, num, c);
    arr[c] = num;
    c++;
    while (i < c)
    {
        j = (i + 1);
        while (j < c && arr[i] != arr[j])
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
