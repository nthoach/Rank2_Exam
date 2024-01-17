/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:10:40 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 10:10:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill_curr(char **tab, t_point size, t_point curr, char c)
{
	if ((curr.y < 0) || (curr.x < 0) 
		|| (curr.y >= size.y) || (curr.x >= size.x)
		|| (tab[curr.y][curr.x] != c))
		return ;
	tab[curr.y][curr.x] = 'F';
	fill_curr(tab, size, (t_point){curr.x - 1, curr.y}, c);
	fill_curr(tab, size, (t_point){curr.x + 1, curr.y}, c);
	fill_curr(tab, size, (t_point){curr.x, curr.y - 1}, c);
	fill_curr(tab, size, (t_point){curr.x, curr.y + 1}, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill_curr(tab, size, begin, tab[begin.y][begin.x]);
}