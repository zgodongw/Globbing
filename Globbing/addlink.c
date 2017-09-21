/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addlink.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:30:15 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/21 10:37:03 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*addlink(t_list *list, char *str)
{
	t_list	*tmp;

	tmp  = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
