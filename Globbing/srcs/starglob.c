/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:01:57 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/23 17:02:39 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"

int		starglob(const char *name, char *str)
{
	if (str[0] != '*')
	{
		if (ft_strncmp(name, str, ft_strlen(str) - 1) == 0)
			return (1);
		return (0);
	}
	else if (str[0] == '*')
		if (ft_strstr(name, &(str[1])) != 0)
			return (1);
	return (0);
}
