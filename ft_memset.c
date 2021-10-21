void *ft_memset(void *mem_loc, int c, int n)
{
	int	counter;
	int	i;
	int	*int_pointer;

	counter = 0;
	while (counter <= n)
	{
		((int*)mem_loc)[counter] = c;
		counter++;
	}
}