/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:30:02 by marvin            #+#    #+#             */
/*   Updated: 2024/01/10 11:30:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;