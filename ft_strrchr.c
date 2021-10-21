char *ft_strrchr(const char *s, int c)
{
	int i;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char*)c)
			return (s);
		else
			s--;
	}
	return (NULL);
}