/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:40:10 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/23 16:57:20 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "globbing.h"

int main(int argc, char **argv)
{
	t_list	*list;

	if (argc < 2)
		return (0);
	list = globinit(argv[1]);
	printlist(list);
	freelist(&list);
	return (0);
}
