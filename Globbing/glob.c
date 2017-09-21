/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:21:28 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/21 18:42:24 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 
#include<stdlib.h> 
#include <sys/types.h> 
#include <dirent.h>
#include "ft_list.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && i < (int)n && s1[i] != '\0')
		i++;
	if (i == (int)n)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s2[pos] == s1[i + pos])
		{
			if (pos == len - 1)
				return ((char *)s1 + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}

int		isglob(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '*')
			return (1);	
		else if (s[i]  == '?')
			return (2);
		else if (s[i] == '[')
			return (3);
		else if (s[i] == '{')
			return (4);
		i++;
	}
	return (0);
}

int		starglob(char *name, char *str)
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

int		quesglob(char *name, char *str)
{
	if (str[0] == '?')
	{
		if ((ft_strstr(name, &str[1]) != 0) && (ft_strlen(name) == ft_strlen(str)))
			return (1);
	}
	else if ((str[0] != '?'))
	{
		//not done yet
	}
	return (0);
}

int		globfunction(char *name, char *str)
{
	if (isglob(str) == 0)
		return (0);
	if (isglob(str) == 1)
		if (starglob(name, str) == 1)
			return (1);
	if (isglob(str) == 2)
		if (quesglob(name, str) == 1)
			return (1);
	return (0);
}

int		main(int argc, char **argv) 
{
	char *curr_dir = NULL; 
	DIR *dp = NULL; 
	struct dirent *dptr = NULL;
	t_list *list;

	if (argc < 2)
	{
		printf("SEGFAULT, you idiot!");
		return (0);
	}
	list = NULL;
	
	// Get the value of environment variable PWD
	curr_dir = getenv("PWD");
	if (NULL == curr_dir)
	{
		printf("\nERROR : Could not get the working directory\n");
		return -1;
	}

	// Open the current directory 
	dp = opendir((const char*)curr_dir);
	if(NULL == dp)
	{
		printf("\n ERROR : Could not open the working directory\n");
		return -1;
	}
	
	while ((dptr = readdir(dp)) != NULL)
	{
		if ((globfunction(dptr->d_name, argv[1]) == 1))
		{
			list = addlink(list, dptr->d_name);
			printf("%s\n", dptr->d_name);
		}
	}
	freelist(&list);
    return 0; 
 }
