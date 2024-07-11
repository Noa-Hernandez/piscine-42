/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:18:40 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/01 11:45:56 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
    int nb;
    int result;

    nb = 2;
    result = ft_sqrt(nb);
    printf("la racine carre de : %d est : %d\n", nb, result);
}
*/
