/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:17:08 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/01 19:23:13 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	conversion;
	int	minus;
	int	i;

	i = 0;
	minus = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			minus = -minus;
		}
		i++;
	}
	conversion = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		conversion = conversion * 10 + str[i] - '0';
		i++;
	}
	return (conversion * minus);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char *str = " ---+--+1234ab567";
	int value = ft_atoi(str);
	int  the_a = atoi(str);

	printf("string : %s\n", str);
	printf("converted to int : %d\n", value);
	printf("Valeur de lib atoi : %d\n", the_a);
	return (0);
}
