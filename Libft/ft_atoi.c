/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:16:56 by buramert          #+#    #+#             */
/*   Updated: 2025/02/03 22:37:14 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	sign;
	long	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		sum *= 10;
		sum += str[i] - 48;
		if ((sum * sign) > MAX_INT || (sum * sign) < MIN_INT)
		{
			return(0);
		}
		i++;
	}
	return (sum * sign);
}
