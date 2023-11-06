/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:28:28 by yetan             #+#    #+#             */
/*   Updated: 2023/10/25 13:46:05 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getarr(char const *s, char c)
{
	size_t	arr;

	arr = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			arr++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (arr);
}

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

char	**ft_freemem(char **s, size_t ix)
{
	while (s[ix] != NULL && ix > 0)
	{
		free(s[ix]);
		s[ix] = NULL;
		ix--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

static char	**splitstn(char const *s, char c, char **words, size_t tot_word)
{
	size_t	ix;
	size_t	j;

	ix = 0;
	j = 0;
	while (ix < tot_word)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(words + ix) = ft_substr(s, j, word_len((s + j), c));
		if (!*(words + ix))
		{
			ft_freemem(words, ix);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		ix++;
	}
	*(words + ix) = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	tot_word;

	if (!s)
		return (NULL);
	tot_word = ft_getarr(s, c);
	words = (char **)malloc(sizeof(char *) * (tot_word + 1));
	if (!words)
		return (NULL);
	words = splitstn(s, c, words, tot_word);
	return (words);
}
/*
#include <stdio.h>

int main() 
{
    const char *input = " ";
    char delimiter = ' ';

    char **tokens = ft_split(input, delimiter);

    for (int i = 0; tokens[i] != NULL; i++) {
        printf("Token %d: %s\n", i, tokens[i]);
        free(tokens[i]); // Free allocated memory for each token
    }
    free(tokens); // Free the array of pointers

    return 0;
}
*/
