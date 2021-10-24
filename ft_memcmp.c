int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	if (*(char*)s1 == *(char*)s2)
		return (0);
	while (*(char*)s1 && *(char*)s2 && n > 0)
	{
		if (*(char*)s1 == *(char*)s2)
		{
			s1++;
			s2++;
		}
		else
			return (*(char*)s1 - *(char*)s2);
	}
	return (0);
}