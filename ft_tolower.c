/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:49:41 by yetan             #+#    #+#             */
/*   Updated: 2023/10/18 22:37:22 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*
#include <stdio.h>\

int	main(void)
{
	char input[100];
	printf("Enter a string: ");
	fgets(input, sizeof(input), stdin);

	int i = 0;
	while (input[i] !='\0')
	{
		input[i] = ft_tolower(input[i]);
		i++;
	}
	printf("Lower cased string: %s", input);
	return (0);
}
*/
