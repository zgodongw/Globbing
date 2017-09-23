/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quesglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 14:02:03 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/23 17:13:56 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"

int		quesglob(const char *name, char *str)
{
	if (str[0] == '?')
	{
		if ((ft_strstr(name, &str[1]) != 0)
				&& (ft_strlen(name) == ft_strlen(str)))
			return (1);
	}
	else if ((str[0] != '?'))
	{
		if (((ft_strncmp(name, str, ft_strlen(str) - 1)) == 0)
				&& (ft_strlen(name) == ft_strlen(str)))
			return (1);
	}
	return (0);
}
