/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:08:39 by yetan             #+#    #+#             */
/*   Updated: 2023/10/18 23:24:58 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char input[100];
	printf("Enter a string: ");
	fgets(input, sizeof(input), stdin);

	int i = 0;
	while (input[i] != '\0')
	{
		input[i] = ft_toupper(input[i]);
		i++;
	}
	printf("Uppercased string: %s ", input);
	return (0);
}	
*/	
