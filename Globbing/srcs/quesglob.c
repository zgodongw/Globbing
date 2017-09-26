/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quesglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 14:02:03 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/26 12:50:42 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"

int		quesglob(const char *name, char *str)
{
	int i;

	i = 0;
	if (ft_strlen(name) == ft_strlen(str))
	{
		while (name[i] != '\0')
		{
			if (str[i] != '?')
				if (str[i] != name[i])
					return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
