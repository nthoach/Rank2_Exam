/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:20:40 by nthoach           #+#    #+#             */
/*   Updated: 2023/12/26 22:32:52 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int	main(void)
{
	char s1[15] = "Hello World";
	char s2[9] = "12345\0";
	
	printf("%s\n", s1);
	printf("%s\n",ft_strcpy(s1, s2));
	return (0);
}