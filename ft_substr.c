/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:12:16 by yetan             #+#    #+#             */
/*   Updated: 2023/11/01 15:24:08 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*cpystr;
	size_t	s_len;
	size_t	ix;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	else if (len > (s_len - start))
		len = s_len - start;
	cpystr = (char *)malloc(sizeof(char) * (len + 1));
	if (!cpystr)
		return (0);
	s += start;
	ix = 0;
	while (ix < len && *s)
	{
		cpystr[ix] = s[ix];
		ix++;
	}
	cpystr[ix] = '\0';
	return (cpystr);
}
