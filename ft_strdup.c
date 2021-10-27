#include <stdlib.h>
char	*ft_strdup(const char *s1)
{
	int	i;
	char	*alloc;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	if((alloc = malloc(i * sizeof(char) + 1)) == NULL)
		return (NULL);
	else
		return (alloc);
}