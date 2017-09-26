/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curlybrac.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:29:34 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 18:51:57 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globbing.h"
#include "minilibft.h"
#define BLOCKLEN (leninbrac(str) + 2)

static int				leninbrac(char *str)
{
	int			i;

	i = 0;
	while (str[i + 1] != '}')
		i++;
	return (i);
}

static char				*letters(char *str)
{
	int			i;
	int			k;
	char		*tmp;

	i = 1;
	k = 0;
	tmp = (char *)malloc(sizeof(char) * leninbrac(str));
	if ((str[0] == '{') && (brackets(str, 0)) && tmp != NULL)
	{
		while (str[i] != '}')
		{
			tmp[k] = str[i];
			k++;
			i++;
		}
	}
	return (tmp);
}

static char	**words(char *str)
{
	char **strings;
	char *inbrac;
	int	i = 0;

	inbrac = letters(str);
	strings = ft_strsplit(inbrac, ',');
	//printf("%s\n", strings[0]);
	free(inbrac);
	return (strings);	
}

int		curlyglob(const char *name, char *str)
{
	char	*glstr;
	char	**tokens;
	int		i;

	i = 0;
	if (str[0] == '{' && brackets(str, 0))
	{
		tokens = words(str);
		while (tokens[i])
		{
			glstr = ft_strjoin(tokens[i], &str[BLOCKLEN]);
			if (ft_strcmp(name, glstr) == 0)
			{
				free(glstr);
				return (1);
			}
			i++;
			free(glstr);
		}
		ft_delarray(tokens);
	}
	return (0);
}
