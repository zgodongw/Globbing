/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:01:57 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 09:35:33 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"

//please dont use this function anywhere else.. might have undefined behaviour
static int	ft_strendcmp(const char *name, char *str)
{
	int i = 0;
	int k = 0;
	while (name[i] != str[0])
	{
		if (name[i] == '\0')
			return (0);
		i++;
	}
	if (ft_strcmp(&name[i], str) == 0)
			return (1);
	return (0);
}

int			starglob(const char *name, char *str)
{
	if (str[0] != '*')
	{
		if (ft_strncmp(name, str, ft_strlen(str) - 1) == 0)
			return (1);
		return (0);
	}
	else if (str[0] == '*')
		if (ft_strendcmp(name, &(str[1])) != 0)
			return (1);
	return (0);
}
