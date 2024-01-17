/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:18:59 by nthoach           #+#    #+#             */
/*   Updated: 2023/12/27 17:27:30 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int agc, char **agv)
{
	int	i;
	int	n_repeat;
	i = 0;
	if (agc == 2)
	{
		while (agv[1][i])
		{
			if (agv[1][i] >= 'A' && agv[1][i] <= 'Z')
			{
				n_repeat = agv[1][i] - 'A' + 1;
				while (n_repeat--)
					write(1, &agv[1][i], 1);
			}
			else if (agv[1][i] >= 'a' && agv[1][i] <= 'z')
			{
				n_repeat = agv[1][i] - 'a' + 1;
				while (n_repeat--)
					write(1, &agv[1][i], 1);
			}
			else
				write(1, &agv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}