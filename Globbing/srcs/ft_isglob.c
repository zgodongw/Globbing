#include "globbing.h"

int		isglob(const char *s)
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