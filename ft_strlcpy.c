/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:08:45 by yetan             #+#    #+#             */
/*   Updated: 2023/11/02 16:11:44 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	ix;
	size_t	src_len;

	ix = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (src[ix] && ix + 1 < size)
	{
		dest[ix] = src[ix];
		ix++;
	}
	if (size)
		dest[ix] = '\0';
	return (src_len);
}
