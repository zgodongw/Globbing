/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 12:03:22 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/22 12:09:16 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"

static int		braclose(const char *str, char c, int i, int b)
{
	while (b && *(++str) && (i++))
	{
		if (*str == c || *str == c + c % 2 + 1)
		{
			if (*str == c)
				++b;
			else
				--b;
		}
	}
	return (i);
}

int				brackets(const char *str, char c)
{
	if (*str == c)
		return (1);
	else if (!*str || *str == ')' || *str == '}' || *str == ']')
		return (0);
	else if (*str == '(' || *str == '{' || *str == '[')
		return (brackets(str + 1, *str + *str % 2 + 1) *
				brackets(str + braclose(str, *str, 1, 1), c));
	else
		return (brackets(str + 1, c));
}
