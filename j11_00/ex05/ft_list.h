/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:11:44 by jjauzion          #+#    #+#             */
/*   Updated: 2017/08/21 22:50:02 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;

}				t_list;

t_list			*ft_create_elem(void *data);
void			ft_list_pushback(t_list **begin_list, void *data);

#endif
