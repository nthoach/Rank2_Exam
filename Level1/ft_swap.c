/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:20:40 by nthoach           #+#    #+#             */
/*   Updated: 2023/12/27 17:18:04 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 1;
	
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}