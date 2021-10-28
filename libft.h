/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:06:29 by atereso-          #+#    #+#             */
/*   Updated: 2021/10/28 16:14:47 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	t_size_t;
int			ft_isalpha(unsigned char c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int ch);
int			ft_isprint(int ch);
int			ft_strlen(const char *str);
void		*ft_memset(void *mem_loc, int c, int n);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
void		*ft_memmove(void *dst, const void *src, t_size_t len);
t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize);
t_size_t	ft_strlcat(char *dst, const char *src, t_size_t dstsize);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, t_size_t n);
void		*ft_memchr(const void *s, int c, t_size_t n);
int			ft_memcmp(const void *s1, const void *s2, t_size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, t_size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(t_size_t count, t_size_t size);
char		*ft_strdup(const char *s1);
#endif
