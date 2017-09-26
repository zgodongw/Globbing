/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:40:10 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/26 07:42:08 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include "globbing.h"
#include "minilibft.h"

void		ft_putchar(char c)
{
	write(1, &c , 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int			main(int argc, char **argv)
{
	//int		i = 0;

	char	**names;

	if (argc < 2)
		return (0);
	names = globinit(argv[1]);
	/*while (i < (int)ft_arraylen(names))
	{
		printf("%s\n", names[i]);
		i++;
	}
//	ft_delarray(names);*/
	return (0);
}
