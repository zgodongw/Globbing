#include "globbing.h"

int		globfunction(const char *name, char *str)
{
	if (isglob(str) == 0)
		return (0);
	if (isglob(str) == 1)
		if (starglob(name, str) == 1)
			return (1);
	if (isglob(str) == 2)
		if (quesglob(name, str) == 1)
			return (1);
	if (isglob(str) == 3)
		if (bracglob(name, str) == 1)
			return (1);
	return (0);
}
