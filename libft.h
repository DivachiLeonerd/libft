#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(unsigned char c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int ch);
int ft_isprint(int ch);
int ft_strlen(const char *str);
void *ft_memset(void *mem_loc, int c, int n);
void ft_bzero(void *s, unsigned int n);
void *ft_memcpy(void *dest, const void *src, unsigned n);
void *ft_memmove(void *dst, const void *src, unsigned int len);
unsigned int ft_strlcpy(char *restrict_dst, const char *restrict_src, unsigned int dstsize);
unsigned int ft_strlcat(char *restrict_dst, const char *restrict_src, unsigned int dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
void *ft_memchr(const void *s, int c, unsigned int n);
int ft_memcmp(const void *s1, const void *s2, unsigned int n);
char *ft_strnstr(const char *haystack, const char *needle, unsigned int len);
int ft_atoi(const char *str);
#endif
