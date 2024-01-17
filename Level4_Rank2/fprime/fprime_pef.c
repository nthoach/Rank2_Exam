/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime_pef.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:16:08 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 11:16:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int agc, char **agv)
{
	int num;
	int i;

	if (agc == 2)
	{
		num = atoi(agv[1]);
		if (num == 1)
			printf("1");
		else
		{
			i = 2;
			while (i <= num)
			{
				if (num % i == 0)
				{
					printf("%d", i);
					if (i == num)
						break ;
					printf("*");
					num = num / i;
				}
				else
					i++;
			}

		}
	}
	printf("\n");
	return (0);
}