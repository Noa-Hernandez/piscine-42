/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:01:06 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 11:06:51 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int	main()
{
	int c = 10;
	int d = 5;
	ft_swap(&c, &d);
	printf("la valeur de a est %d et la valeur de b est %d\n", c, d);
}
