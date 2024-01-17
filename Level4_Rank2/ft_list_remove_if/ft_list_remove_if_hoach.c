/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if_hoach.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:42:02 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 12:42:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list	**begin_list, void *data_ref, int (*cmp)())
{
	t_list *cur;
// two issues: begin_list updated or not, relink the previous node
	if (!begin_list || !(*begin_list))
		return ;
	cur = *begin_list;
	
	//if (cmp(cur->data, data_ref) == 0)
	//{
	//	*begin_list = cur->next;
	//	free(cur);
	//	ft_list_remove_if(begin_list, data_ref, cmp); 
	//}
	//cur = *begin_list;
	//ft_list_remove_if(&cur->next, data_ref, cmp);
}

#include <stdio.h>
#include <string.h>

void	print_list(t_list **begin_list)
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
	char *stra = "string a";
	t_list *a = malloc(sizeof(t_list));
	a->next = 0;
	a->data = stra;

	char *strb = "string b";
	t_list *b = malloc(sizeof(t_list));
	b->next = 0;
	b->data = strb;

	char *strc = "string c";
	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = strc;

	a->next = b;
	b->next = c;

	t_list **begin_list = &a;
	print_list(begin_list);
	printf("-----\n");
	ft_list_remove_if(begin_list, strb, strcmp);
	print_list(begin_list);
}
