void	ft_bzero(void *s, unsigned int n)
{
	while (((char*)s) && n >= 0)
	{
		(*(char*)s) = '\0';
		(*(char*)s)++;
		n--;
	}
	
}