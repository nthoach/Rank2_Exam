/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:20:40 by nthoach           #+#    #+#             */
/*   Updated: 2023/12/27 17:13:47 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char s1[15] = "Hello World";
	char s2[9] = "\0";
	
	printf("%d\n", ft_strlen(s1));
	printf("%d\n",ft_strlen(s2));
	return (0);
}