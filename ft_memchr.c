void *ft_memchr(const void *s, int c, unsigned int n)
{
	while (*s && n > 0)
	{
		if (*s == (char*)c)
			return (s);
		else
			s++;
	}
	return (NULL);
}