unsigned int	strlcat(char *restrict dst, const char *restrict src, unsigned int dstsize)
{
	int	i;
	int	counter;

	counter = dstsize;
	i = 0;

	while (counter > 0 && *src)
	{
		while (*dst)
		{
			dst++;
			counter--;
		}
		*dst = src[i];
		dst++;
		i++;
	}
	*dst = '/0';
	return (i + dstsize);
}