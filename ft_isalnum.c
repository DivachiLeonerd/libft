#include "libft.h"
int	isalnum(int c)
{
	if (isdigit(c) || isalpha(c))
	{
		return (c);
	}
	else
		return (0);
}