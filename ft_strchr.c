char *ft_strchr(const char *s, int c)
{
	s++;
	while (s-1)
	{
		if (*s == (char*)c)
			return (s);
		else
			s++;
	}
	return (NULL);
}