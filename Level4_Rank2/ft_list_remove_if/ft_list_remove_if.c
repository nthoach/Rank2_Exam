/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:28:50 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 11:28:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *cur;

	if (!begin_list || !(*begin_list))
		return ;
	cur = *begin_list;	
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	//cur = *begin_list;
	ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
}

#include <stdio.h>
#include <string.h>

void	 print_list(t_list **begin_list)
{
	t_list *cur;


	cur = *begin_list;
	while (cur)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

int	main(void)
{
	char	straa[] = "string aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[]= "string bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char	strcc[] = "string cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[]= "string dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;
	
	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
}
