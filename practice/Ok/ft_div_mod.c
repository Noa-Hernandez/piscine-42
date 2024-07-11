/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:08:09 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 11:14:31 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
#include <stdio.h>
int	main()
{
	int	c = 10;
	int d = 7;
	int	div;
	int mod;

	ft_div_mod(c, d, &div, &mod);
	printf("Le resultat de la div est %d et le resultat du mod est %d\n", div, mod);
}