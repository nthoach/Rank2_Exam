/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 10:32:45 by honguyen          #+#    #+#             */
/*   Updated: 2024/01/06 11:35:52 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list	t_list;

struct	s_list
{
	int		data;
	t_list	*next;
};

// typedef struct s_list
// {
// 	int		data;
// 	struct	s_list *next;
// }	t_list;
