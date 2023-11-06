/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:34:35 by yetan             #+#    #+#             */
/*   Updated: 2023/10/24 19:56:40 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_prtchr(char *s, unsigned int num, long int len)
{
	while (num > 0)
	{
		s[len--] = (num % 10) + 48;
		num = num / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	num;

	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	ft_memset(s, '\0', (len + 1));
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		num = n * -1;
		s[0] = '-';
	}
	else
		num = n;
	s = ft_prtchr(s, num, len);
	return (s);
}
/*
#include <stdio.h>

int main()
{
	int num = -214783648;
	char *str = ft_itoa(num);

	if (str != NULL)
	{
		printf ("Interger as string: %s\n", str);
		free(str);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/
