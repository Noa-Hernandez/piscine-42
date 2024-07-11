/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:15:26 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 11:23:06 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
#include <stdio.h>
int	main()
{
	int	c = 10;
	int	d = 7;

	ft_ultimate_div_mod(&c, &d);
	printf("Le resultat de la div est %d et le resultat du mod est %d\n", c, d);

}