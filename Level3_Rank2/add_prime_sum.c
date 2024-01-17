/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:14:22 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 17:14:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int n = 0;

	if (!str)
		return (0);
	while(str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			return (0);
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	//printf("%d\n", n);
	return (n);
}

int	is_prime(int n)
{
	int i = 2;

	if (n == 2 || n == 3 || n == 5)
		return (1);
	while (i * i <= n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	char c;
	if (n > 9)
		put_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int agc, char **agv)
{
	int	num;
	int	sum;
	int	i;

	i = 2;
	sum = 0;
	num = ft_atoi(agv[1]);
	if (agc == 2 && num > 0)
	{
	
		while (i <= num)
		{
			if (is_prime(i))
			{
				//printf("%d\n", i);
				sum += i;
			}
			i++;
		}
		put_nbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	//printf("%d\n", i);
	return (0);
}
