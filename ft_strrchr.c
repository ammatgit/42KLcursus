/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:19:28 by yetan             #+#    #+#             */
/*   Updated: 2023/10/28 08:46:07 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*pt = str + ft_strlen(str);

	while (pt >= str)
	{
		if (*pt == (char)c)
			return ((char *)pt);
		pt--;
	}
	return (0);
}
