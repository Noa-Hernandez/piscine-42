/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:19:40 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/22 15:06:21 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int	c = 80;
	int d = 90;

	int div;
	int mod;

	ft_ultimate_div_mod(&c, &d);
	printf("Div : %d\n", c);
	printf("modulo : %d\n", d);
}
*/