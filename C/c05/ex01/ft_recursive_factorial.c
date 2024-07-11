/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:23:52 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/01 11:22:01 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
    int nb;
    int result;

    nb = 5;
    printf("Le nombre de base est : %d\n", nb);
    result = ft_recursive_factorial(5);
    printf("le resultat est : %d\n", result);
}
*/