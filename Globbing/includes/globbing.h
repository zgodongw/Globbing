/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globbing.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:55:45 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 11:34:56 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBBING_H
# define GLOBBING_H
# include<stdio.h> 
# include<stdlib.h> 
# include <sys/types.h> 
# include <dirent.h>
# include <string.h>
# include "ft_list.h"

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char*, const char*, size_t);
int		ft_strlen(const char*);
char	*ft_strstr(const char*, const char*);
char	*ft_strchr(const char *s, int c);
int		isglob(const char*);
int		rangeisvalid(const char*);
int		ft_isalnumextended(char);
int		starglob(const char*, char*);
int		quesglob(const char*, char*);
int		bracglob(const char*, char*);
int		globfunction(const char*, char*);
int		brackets(const char*, char);
char	**listtoarray(t_list**);
char	**globinit(char *);

# endif
