/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addlink.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:16:07 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/23 17:04:48 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"

void	addlink(t_list **head, char *str)
{
	t_list *newnode;
	t_list *temp;

	newnode = (t_list *)malloc(sizeof(t_list));
	newnode->str = str;
	newnode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
}
