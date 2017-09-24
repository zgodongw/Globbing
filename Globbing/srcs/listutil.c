/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:07:29 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/24 09:27:15 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"

size_t	sizeoflist(t_list *list)
{
	size_t i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	freelist(t_list **list)
{
	free(*list);
	*list = NULL;
}

void	printlist(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->str);
		list = list->next;
	}
}

char	**listtoarray(t_list **list)
{
	char	**name;
	size_t	i;
	t_list *tmp;

	tmp = *list;
	i = 0;
	name = (char **)malloc(sizeof(char *) * sizeoflist(tmp));
	while (tmp)
	{
		name[i] = tmp->str;
		tmp = tmp->next;
		i++;
	}
	free(tmp);
	return (name);
}
