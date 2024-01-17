/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:46:13 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 10:46:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.h"
#include <stddef.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*lst_0;
	int		tmp_i;

	lst_0 = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			tmp_i = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp_i;
			lst = lst_0;
		}
		else	lst = lst->next;
	}
	return (lst_0);
}

#include <stdio.h>

int	main(void)
{
	
	return (0);
}