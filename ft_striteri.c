/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:21:48 by yetan             #+#    #+#             */
/*   Updated: 2023/10/25 21:18:00 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	ix;

	if (s && f)
	{
		ix = 0;
		while (*s)
			f(ix++, s++);
	}
}
/*
#include <ctype.h>
#include <stdio.h>

void uppercase(unsigned int index, char *ch)
{
	(void) index;
	*ch = toupper(*ch);
	printf("after function call: %c\n", *ch);
}
int main(void)
{
	char str[] = "hello";
	ft_striteri(str, uppercase);

	return 0;
}
*/			
