/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:27:22 by yetan             #+#    #+#             */
/*   Updated: 2023/11/02 16:10:06 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sx;
	size_t	dx;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (src_len + size);
	dx = dest_len;
	sx = 0;
	while (src[sx] != '\0' && (dx + 1) < size)
	{
		dest[dx] = src[sx];
		dx++;
		sx++;
	}
	dest[dx] = '\0';
	return (dest_len + src_len);
}
