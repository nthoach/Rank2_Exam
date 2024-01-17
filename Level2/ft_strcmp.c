/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:47:53 by nthoach           #+#    #+#             */
/*   Updated: 2024/01/03 21:16:17 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <string.h>
#include <stdio.h>

int	main(int agc, char ** agv)
{
	printf("%d : %d\n", strcmp(agv[1], agv[2]), ft_strcmp(agv[1], agv[2]));
}