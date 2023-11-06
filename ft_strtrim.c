/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:53:39 by yetan             #+#    #+#             */
/*   Updated: 2023/10/22 14:18:05 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	new_s1;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	new_s1 = ft_strlen(s1);
	while (new_s1 > 0 && ft_strrchr(set, s1[new_s1 - 1]))
		new_s1--;
	trimmed = (char *)malloc(sizeof(char) * (new_s1 + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, (char *)s1, new_s1 + 1);
	return (trimmed);
}
