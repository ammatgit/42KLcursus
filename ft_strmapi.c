/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:03:32 by yetan             #+#    #+#             */
/*   Updated: 2023/10/25 17:10:40 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mem_aloc(size_t n)
{
	char	*new_s;

	new_s = (char *)malloc(sizeof(char) * (n + 1));
	if (!new_s)
		return (NULL);
	return (new_s);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	ix;
	char	*new_s;
	char	*results;

	if (!s || !f)
		return (NULL);
	new_s = mem_aloc(ft_strlen(s));
	if (!new_s)
		return (NULL);
	ix = 0;
	results = new_s;
	while (*s)
		*new_s++ = f(ix++, *s++);
	*new_s = '\0';
	return (results);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char inc_asciii(unsigned int idx, char c)
{
	(void) idx;
	return ( c + 1);
}

#include <stdio.h>

int main (void)
{
	const char *myString = "Hello";
	printf("Original string ; %s\n", myString);
	char *trans_form = ft_strmapi(myString, inc_asciii);
	if(trans_form != NULL)
	{
		printf("Tranformed String: %s\n", trans_form);
		free(trans_form);
	} else {
		printf("Error: Memory allocation or NULL input string.\n");
	}
}
*/