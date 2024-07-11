/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:52:04 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/01 11:26:45 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power < 0)
	{
		return (result);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main()
{
    int nb;
    int power;
    int result;

    nb = 0;
    power = 0;
    printf("le nombre est : %d\nla puissance est %d\n", nb, power);
    result = ft_iterative_power(nb, power);
    printf("le resultat est : %d\n", result);
}
*/