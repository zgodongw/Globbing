#include "globbing.h"

int		starglob(const char *name, char *str)
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