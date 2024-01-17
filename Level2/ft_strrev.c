/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 21:30:42 by nthoach           #+#    #+#             */
/*   Updated: 2024/01/03 21:44:55 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int 	j;
	char	c;
	
	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

#include <stdio.h>

int	main(int agc, char **agv)
{

	printf("%s:", agv[1]);
	printf("%s\n", ft_strrev(agv[1]));
	return (0);
}