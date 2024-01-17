/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:04:11 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 16:04:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*cur;

	if (!begin_list)
		return ;
	cur = begin_list;
	while (cur)
	{
		f(cur->data);
		cur = cur->next;
	}
}

#include <stdio.h>
#include <stdlib.h>


void	 print_list(t_list *begin_list)
{
	t_list *cur;


	cur = begin_list;
	while (cur)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

void	zero_str(void *s)
{
	char *str;
	
	str = (char *)s;
	while (*str)
	{
		*str = '0';
		str++;
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
	
	t_list *begin_list = aa;

	print_list(begin_list);
	printf("------\n");
	ft_list_foreach(begin_list, zero_str);
	print_list(begin_list);
}

