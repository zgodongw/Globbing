/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:25:10 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 11:45:03 by zgodongw         ###   ########.fr       */
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

t_list			*addend(t_list*, t_list *);
t_list			*newelement(char *);
t_list			*frontaddlink(t_list *list, char *str);
void			addlink(t_list **list, char *str);
void			freelist(t_list **list);
size_t			sizeoflist(t_list *list);
void			printlist(t_list *list);


#endif
