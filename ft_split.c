/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:16:20 by afonso            #+#    #+#             */
/*   Updated: 2021/12/11 17:46:13 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	word_count(char const *s, char c)
{
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;								// ola como ta
			i++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	//printf("%d\n\n\n\n", counter);
	printf("word_count success\n");
	return (counter);
}

static int	how_many_char(char const *s, char c, int wordnum)
{
	int	i;
	int	counter;
	int	chrnum;

	chrnum = 0;
	counter = 0;
	i = 0;
	while (s[i] && counter <= wordnum)
	{
		if (s[i] != c)
		{
			counter++;
			while ((s[i] != c) && (wordnum == counter))
			{
				chrnum++;
				i++;
			}
		}
		i++;
	}
	printf("How many char success\n");
	return (chrnum);
}

static char const	*return_word(char const *s, int c, int wordnum)
{
	int	counter;
	char *str;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			*str = s[counter];
			str++;
			s++;
			if (counter == wordnum)
			{
				printf("return_word success\n");
				return (str);
			}
			while (*s != c)
				s++;
		}
		s++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			wordcount;
	int			i;
	int aux;
	char const	*word;

	i = 0;
	if (!s || !c)
		return (NULL);
	wordcount = word_count(s, c);
	//printf("%d", wordcount);
	split = malloc((wordcount + 1) * sizeof(char));
	while (i < wordcount)
	{
		aux = how_many_char(s, c, i + 1);
		split[i] = malloc((aux + 1) * sizeof(char));
		if(!split[i])
			return NULL;
		word = return_word(s, c, i + 1);
		// while (j < how_many_char(s, c, i + 1))
		// {
		// 	split[i][j++] = *word;
		// 	word++;
		// }
		// split[i++][j] = '\0';
		ft_strlcpy(split[i], word, aux);
		i++;
	}
	split[i] = NULL;
	return (split);
}

int main(void)
{
	int c = ' ';
	char string[] = "ola esta tudo ty jytdf yudy";
	int i;
	char	**split;

	i = word_count(string, c);
	split = ft_split(string, c);
	while (i >= 0)
	{
		printf("%s", split[i]);
		i--;
	}
}
// static int	count_words(const char *str, char c)
// {
// 	int i;
// 	int trigger;

// 	i = 0;
// 	trigger = 0;
// 	while (*str)
// 	{
// 		if (*str != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			i++;
// 		}
// 		else if (*str == c)
// 			trigger = 0;
// 		str++;
// 	}
// 	return (i);
// }

// static char	*word_dup(const char *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		index;
// 	char	**split;

// 	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
// 		return (0);
// 	i = 0;
// 	j = 0;
// 	index = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_dup(s, index, i);
// 			index = -1;
// 		}
// 		i++;
// 	}
// 	split[j] = 0;
// 	return (split);
// }

// int	main(void)
// {
// 	int		i;
// 	char	*string = "cccstringc string2cc";
// 	char	**split;

// 	split = ft_split(string, 'c');
// 	i = 0;
// 	while (i < 2)
// 	{
// 		printf("%s", split[i]);
// 		i++;
// 	}
// }

