/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:57:52 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/30 12:15:39 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power >= 1)
	{
		result = ft_recursive_power(nb, power - 1) * nb;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int	nb;
	int	power;
	int	result;

	nb = 2;
	power = 10;
	printf("le nombre est : %d\nla puissance est : %d\n", nb, power);
	result = ft_recursive_power(nb, power);
	printf("le resultat est : %d\n", result);
}
*/