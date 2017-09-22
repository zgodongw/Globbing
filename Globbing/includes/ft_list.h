/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:25:10 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/21 10:56:52 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST
#define FT_LIST
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct		s_list
{
	char			*str;
	struct s_list	*next;
}					t_list;

t_list			*addlink(t_list *list, char *str);
void			freelist(t_list **list);
size_t			sizeoflist(t_list *list);

#endif
