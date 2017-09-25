/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:40:10 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/25 14:39:57 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"
#include "minilibft.h"

int			main(int argc, char **argv)
{
	int		i = 0;
	int		k = 7;
	t_list	*list;
	char	**names;

	if (argc < 2)
		return (0);
	names = globinit(argv[1]);
	while (i < (int)ft_arraylen(names))
	{
		printf("%s\n", names[i]);
		i++;
	}
	return (0);
}
