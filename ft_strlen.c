int	ft_strlen(const char *str)
{
	int	counter;

	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}