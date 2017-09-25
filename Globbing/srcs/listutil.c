/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:07:29 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 11:45:06 by zgodongw         ###   ########.fr       */
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

t_list	*newelement(char *text)
{
	t_list *newp;

	newp = (t_list *)malloc(sizeof(t_list));
	newp->str = text;
	newp->next = NULL;
	return (newp);
}

t_list	*addend(t_list *head, t_list *newp)
{
	t_list	*p2;

	p2 = head;
	if (p2 == NULL)
		return (newp);
	while (p2->next != NULL)
		p2 = p2->next;
	p2->next = newp;
	return (head);
}
