/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bracglob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 14:02:16 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/22 18:50:15 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"
#include "ft_list.h"
#define BLOCKLEN (leninbrac(str) + 2)

static int		leninbrac(char *str)
{
	int			i;

	i = 0;
	while (str[i + 1] != ']')
		i++;
	return (i);
}

static char		*letters(char *str)
{
	int			i;
	int			k;
	char		*tmp;

	i = 1;
	k = 0;
	tmp = (char *)malloc(sizeof(char) * leninbrac(str));
	if ((str[0] == '[') && (brackets(str, 0)) && tmp != NULL)
	{
		while (str[i] != ']')
		{
			tmp[k] = str[i];
			k++;
			i++;
		}
	}
	return (tmp);
}

static char		*rangebrac(char *let)
{
	char		rep[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char		*buff = (char *)malloc(100); 

	//Assume let = letter - letter
	printf("%s\n", ft_strchr(rep, let[0]));//- ft_strnstr(rep, &let[2], 1);

	return (buff);
}

int				bracglob(const char *name, char *str)
{
	int			k;
	char		*let;

	k = 0;
	let = letters(str);
	rangebrac(let);
	/*if ((str[0] == '[') && (brackets(str, 0)) && let != NULL)
	{
		if ((ft_strstr(name, &str[BLOCKLEN]) != 0)
	&& (ft_strlen(name) == (ft_strlen(str) - (BLOCKLEN - 1))))
			while (k < leninbrac(str))
			{
				if (name[0] == let[k])
				{
					free(let);
					return (1);
				}
				k++;
			}
		free(let);
	}*/
	return (0);
}
