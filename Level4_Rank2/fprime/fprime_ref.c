/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime_ref.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:00:20 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 11:00:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int agc, char **agv)
{
	int n;
	int i = 2;

	if (agc == 2)
	{
		n = atoi(agv[1]);
		if (n == 1)
		{
			printf("1");
			return (0);	
		}
		while (i <= n)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n == i)
					break ;
				printf("*");
				n = n / i;
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}