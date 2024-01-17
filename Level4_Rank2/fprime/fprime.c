/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:25:31 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 10:25:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int i;

	if (n == 2)
		return (1);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}	
	return (1);
}

int	main(int agc, char **agv)
{
	int n;
	int p_factor;
	int flag;

	flag = 0;

	if (agc == 2)
	{
		n = atoi(agv[1]);
		if (n == 1)
			printf("1");
		p_factor = 2;
		while (p_factor <= n)
		{
			if ((is_prime(p_factor) == 1) && (n % p_factor) == 0)
			{
				n = n / p_factor;
				if (flag == 0)
				{
					printf("%d", p_factor);
					flag = 1;
				}
				else		
					printf("*%d", p_factor);
			}
			else
				p_factor++;
		}

	}
	printf("\n");
	return (0);
}
