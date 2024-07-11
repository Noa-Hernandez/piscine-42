/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:04:41 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/05 11:37:17 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	conv_i;
	int	minus;

	i = 0;
	minus = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			minus = minus * -1;
		}
		i++;
	}
	conv_i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv_i = conv_i * 10 + str[i] - '0';
		i++;
	}
	return (conv_i * minus);
}
#include <stdio.h>
int	main()
{
	char *str = "    -+---+--4543543sdgsd24";
	int	result = ft_atoi(str);
	printf("Conversion avec atoi : %d\n", result);
	return(0);
}