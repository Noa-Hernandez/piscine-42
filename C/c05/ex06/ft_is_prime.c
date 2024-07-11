/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:45:48 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/30 16:47:07 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	while (divisor * divisor <= nb)
	{
		if (nb % divisor == 0)
		{
			return (0);
		}
		divisor++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int	nb = 9;
	int result = ft_is_prime(nb);

	if (result == 1)
		printf("%d est un nombre premier \n", nb);
	else
		printf("%d n'est pas un nombre premier \n", nb);
	return(0);
}
*/