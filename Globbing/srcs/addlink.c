/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addlink.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:16:07 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/22 12:09:40 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"

void addlink(t_list **head, char *str)
{
	t_list *newNode;
	t_list *temp;

	newNode = (t_list *)malloc(sizeof(t_list));
	newNode->str = str;
	newNode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
}

