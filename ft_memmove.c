void	*memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	while (dest && len && source)
	{
		*dest = *source;
		source++;
		dest++;
		len--;
	}
	return (dst);
}