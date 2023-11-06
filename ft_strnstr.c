/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:02:12 by yetan             #+#    #+#             */
/*   Updated: 2023/11/02 16:13:11 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	f_len;

	if (!len && !str)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	f_len = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= f_len)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, f_len) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
