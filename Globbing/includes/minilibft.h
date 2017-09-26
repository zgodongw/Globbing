/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:55:00 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 11:55:02 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LIB
# define MINI_LIB
# include <stdlib.h>

char	**ft_add_to_array(char **arr, char *str);
size_t	ft_arraylen(char **array);
void	ft_delarray(char **array);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
char	**ft_strsplit(char const *s, char c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, const char *src);
#endif
