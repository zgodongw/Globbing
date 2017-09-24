/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:40:10 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/24 09:41:36 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"

int			main(int argc, char **argv)
{
	int		i = 0;
	t_list	*list;
	char	**names;

	if (argc < 2)
		return (0);
	list = globinit(argv[1]);
	names = listtoarray(&list);
	free(list);
	while (i < (int)sizeoflist(list))
	{
		printf("%s\n", names[i]);
		i++;
	}
	return (0);
}
