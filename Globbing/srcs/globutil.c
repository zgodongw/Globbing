/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:11:21 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/23 16:19:44 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"

int				ft_isalnumextended(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9') || c == '-')
		return (1);
	return (0);
}

int				rangeisvalid(const char *let)
{
	int k;

	k = 0;
	while(let[k])
	{
		if (ft_isalnumextended(let[k]) == 0)
			return (0);
		k++;
	}
	return (1);
}
