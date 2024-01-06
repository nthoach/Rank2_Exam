/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:15:31 by honguyen          #+#    #+#             */
/*   Updated: 2024/01/06 12:46:35 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab [i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stddef.h>

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * 10);
	if (!tab)
		return (-1);
	srand(time(NULL));
	while (i < 10)
	{
		tab[i] = rand() % 10;
		printf("%d:", tab[i++]);
	}
	printf("\n");
	sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d:", tab[i++]);
	}
	printf("\n");
}
