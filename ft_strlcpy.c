unsigned int strlcpy(char *restrict dst, const char *restrict src, unsigned int dstsize)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	
	while (*dst && *src && (dstsize-1))
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (i);
}