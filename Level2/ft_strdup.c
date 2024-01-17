/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 21:19:43 by nthoach           #+#    #+#             */
/*   Updated: 2024/01/03 21:28:07 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	while (i >= 0)
	{
		s2[i] = s1[i];
		i--;
	}
	return (s2);
}

#include <stdio.h>
#include <string.h>

int	main(int agc, char **agv)
{
	printf("[%s]:[%s]\n", strdup(agv[1]), ft_strdup(agv[1]));
	return (0);
}