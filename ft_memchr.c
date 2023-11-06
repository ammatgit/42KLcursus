/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:41:20 by yetan             #+#    #+#             */
/*   Updated: 2023/10/17 16:16:18 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	ix;

	ix = 0;
	while (ix < n)
	{
		if (*((unsigned char *)s + ix) == (unsigned char)c)
			return ((void *)s + ix);
		ix++;
	}
	return (NULL);
}
