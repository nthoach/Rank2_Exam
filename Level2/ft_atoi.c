/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:27:52 by nthoach           #+#    #+#             */
/*   Updated: 2024/01/03 20:45:58 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	n;
	int	i;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <=13 || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;	
	}
	return (n * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int agc, char **agv)
{
	printf("%d\n", atoi(agv[1]));
	printf("%d\n", ft_atoi(agv[1]));
	return (0);
}