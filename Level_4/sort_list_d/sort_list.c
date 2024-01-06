/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 10:43:47 by honguyen          #+#    #+#             */
/*   Updated: 2024/01/06 12:13:18 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.h"
#include <stddef.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*lst_0;
	int		tmp;

	lst_0 = lst;
	while (lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = lst_0;
		}
		else
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
	//srand(time(1));
	lst2->data = rand() % 200 - 100;
	lst2->next = lst1;
	//srand(time(2));
	lst1->data = rand() % 200 - 100;
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
