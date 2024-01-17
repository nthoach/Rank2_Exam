/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:09:14 by marvin            #+#    #+#             */
/*   Updated: 2024/01/05 13:09:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int agc, char **agv)
{
	int	i;
	int	start;
	int	end;
	int	flag;

	i = 0;
	flag = 0;
	if (agc > 1)
	{
		// skip whitespaces
		while (agv[1][i] == ' ' || agv[1][i] = '\t')
			i++;
		// mark the first word
		start = i;
		while (agv[1][i] && agv[1][i] != ' ' && agv[1][i] ! != '\t')
			i++;
		end = i;
		// print from the second word
		while (agv[1][i] == ' ' || agv[1][i] == '\t')
			i++;
		while (agv[1][i])
		{
			flag = 1;
			while (agv[1][i] == ' ' && agv[1][i+1] == ' ')
				i++;
			write(1, &agv[1][i++], 1);
		}
		if (flag == 1)
			write(1, " ", 1);
		while (start < end)
			write(1, @agv[1][start++], 1);
	}
	write(1, "\n", 1);
}
