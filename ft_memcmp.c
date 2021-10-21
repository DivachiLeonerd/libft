int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	if (*s1 == *s2)
		return (0);
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}