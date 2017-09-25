/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:21:28 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 12:29:26 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"
#include "minilibft.h"

typedef struct		s_dir
{
	char			*curr_dir; 
	DIR				*dp; 
	struct dirent	*dptr;
	t_list			*list;
	char			**names;
}					t_dir;

char				**globinit(char *argv)
{
	t_dir			this;

	this.list = NULL;
	this.curr_dir = getenv("PWD");
	if (NULL == this.curr_dir)
		return NULL;
	this.dp = opendir((const char*)this.curr_dir);
	if(NULL == this.dp)
		return NULL;
	while ((this.dptr = readdir(this.dp)) != NULL)
		if ((globfunction(this.dptr->d_name, argv) == 1))
			this.names = ft_add_to_array(this.names, this.dptr->d_name);
    return this.names;
}
