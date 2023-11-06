/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:14 by yetan             #+#    #+#             */
/*   Updated: 2023/10/21 15:49:59 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	ix;

	if (dest == src || !n)
		return (dest);
	ix = 0;
	if (dest < src)
	{
		while (ix < n)
		{
			*((char unsigned *)dest + ix) = *((const unsigned char *)src + ix);
			ix++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char unsigned *)dest + n - 1)
				= *((const unsigned char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}
