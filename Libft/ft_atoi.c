/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:16:56 by buramert          #+#    #+#             */
/*   Updated: 2025/02/05 04:07:09 by burakerenme      ###   ########.fr       */
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
	if (!(str[i] <= 57 && str[i] >= 48) && (str[i] != ' ') && (str[i] != '\0'))
		return(0);
	return (sum * sign);
}
