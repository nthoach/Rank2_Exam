/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:24:35 by nthoach           #+#    #+#             */
/*   Updated: 2023/12/27 18:32:02 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int agc, char **agv)
{
	int		i;
	char	c;

	i = 0;
	if (agc == 2)
	{
		while (agv[1][i])
		{
			if (agv[1][i] >= 'a' && agv[1][i] <= 'z')
				c = agv[1][i] - 'a' + 'A';
			else if (agv[1][i] >= 'A' && agv[1][i] <= 'Z')
				c = agv[1][i] - 'A' + 'a';
			else 
				c = agv[1][i];
			write(1, &c , 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}