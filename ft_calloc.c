#include <stdlib.h>
void	*calloc(unsigned int count, unsigned int size)
{
	char	*allocator;
	int	i;

	i = 0;
	allocator = malloc(count * size);
	if (!allocator)
		return (NULL);
	while (i < (count * size))
	{
		allocator[i] = 0;
		i++;
	}
	return((void*)allocator);
}