/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:45:30 by nthoach           #+#    #+#             */
/*   Updated: 2023/12/26 22:10:17 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	put_nbr(int	i)
{
	if (i >= 10)
		put_nbr(i/10);
	write(1, &"0123456789"[i%10], 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i%3 == 0 && i%5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i%3 == 0)
			write(1, "fizz", 4);
		else if (i%5 == 0)
			write(1, "buzz", 4);
		else
			put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}