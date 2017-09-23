#include "ft_list.h"
#include "globbing.h"

size_t	sizeoflist(t_list *list)
{
	size_t i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	freelist(t_list **list)
{
	free(*list);
	*list = NULL;
}

void	printlist(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->str);
		list = list->next;		
	}
}

char	**listtoarray(t_list *list)
{
	char	**name;
	int		i;

	i = 0;
	name = (char **)malloc(sizeof(char *) * sizeoflist(list));
	while (list && i < sizeoflist(list))
	{
		name[i] = list->str;
		i++;
	}
	freelist(&list);
	return (name);
}
