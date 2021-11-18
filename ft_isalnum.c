#include "mylib_ft"
int	ft_isalnum(int c)
{
	if (isdigit(c) || isalpha(c))
	{
		return (c);
	}
	else
		return (0);
}