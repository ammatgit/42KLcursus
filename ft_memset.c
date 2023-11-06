/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:06:33 by yetan             #+#    #+#             */
/*   Updated: 2023/10/24 12:14:11 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	ix;

	ix = 0;
	while (ix < num)
	{
		*((unsigned char *)ptr + ix) = value;
		ix++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
    
    int array[5];

    ft_memset(array, 0, sizeof(array));
    for(int i = 0; i < 5; i++)
    {
       printf("array[%d] + %d\n", i, array[i]); 
    }
    return(0);
}
*/
