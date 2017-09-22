/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bracglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 14:02:16 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/22 14:46:22 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"
#include "ft_list.h"
#define BLOCKLEN (leninbrac(str) + 2)

static int leninbrac(char *str)
{
	int i;

	i = 0;
	while (str[i + 1] != ']')
	{
		i++;
	}
	return (i);
}

static char *letters(char *str)
{
	int	i;
	char *tmp;
	int k;
	
	i = 1;
	k = 0;
	tmp = (char *)malloc(sizeof(char) * leninbrac(str));
	if ((str[0] == '[') && (brackets(str, 0)))
	{
		while (str[i] != ']')
		{
			tmp[k] = str[i];
			k++; i++;
		}
	}
	return (tmp);
}

int		bracglob(const char *name, char *str)
{
	int k = 0;
	char *let;

	let = letters(str);
	if ((str[0] == '[') && (brackets(str, 0)) && let != NULL)
	{
		if ((ft_strstr(name, &str[BLOCKLEN]) != 0) && (ft_strlen(name) == (ft_strlen(str) - (BLOCKLEN - 1))))
		{
			while (k < leninbrac(str))
			{
				if (name[0] == let[k])
				{
					free(let);
					return (1);
				}
				k++;
			}
		}
	}
	free(let);
	return (0);
}
