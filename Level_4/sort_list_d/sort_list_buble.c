/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_buble.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 10:43:47 by honguyen          #+#    #+#             */
/*   Updated: 2024/01/06 12:11:55 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.h"
#include <stddef.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*lst_0, *lst_1;
	int		tmp;

	lst_0 = lst;
	while (lst->next != NULL)
	{
		lst_1 = lst->next;
		while (lst_1)
		{
			if (cmp(lst->data, lst_1->data) == 0)
			{
				tmp = lst->data;
				lst->data = lst_1->data;
				lst_1->data = tmp;
			}
			lst_1 = lst_1->next;
		}
		lst = lst->next;
	}
	return (lst_0);
}

int	ascending(int a, int b)
{
	return (a <= b);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	t_list	*lst3, *lst2, *lst1, *lst;

	lst3 = (t_list *)malloc (sizeof(t_list));
	lst2 = (t_list *)malloc (sizeof(t_list));
	lst1 = (t_list *)malloc (sizeof(t_list));
	if ((!lst3) || (!lst2) || (!lst1))
		return (-1);
	lst = lst3;
	srand(time(NULL));
	lst3->data = rand() % 201 - 100;
	lst3->next = lst2;
	lst2->data = rand() % 201 - 100;
	lst2->next = lst1;
	lst1->data = rand() % 201 - 100;
	lst1->next = NULL;
	while (lst)
	{
		printf("%d:", lst->data);
		lst = lst->next;
	}
	printf("\n");
	lst = lst3;
	lst = sort_list(lst, &ascending);
	while (lst)
	{
		printf("%d:", lst->data);
		lst = lst->next;
	}
	printf("\n");
	return (0);
}
