/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:42:05 by yetan             #+#    #+#             */
/*   Updated: 2023/10/24 11:59:36 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	ix;

	if (dest == src || !num)
		return (dest);
	ix = 0;
	while (ix < num)
	{
		*((char *)dest + ix) = *((char *)src + ix);
		ix++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char	source[] = "Hello World";
	char	destination [20];

	ft_memcpy(destination,	source,	6);

	destination[6] = '\0';

	printf("source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
}
*/
