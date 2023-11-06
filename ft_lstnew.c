/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:14:23 by yetan             #+#    #+#             */
/*   Updated: 2023/10/31 12:34:57 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ls1;

	ls1 = (t_list *)malloc(sizeof(t_list));
	if (!ls1)
		return (NULL);
	ls1->content = content;
	ls1->next = NULL;
	return (ls1);
}
