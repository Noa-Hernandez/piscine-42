/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   !max.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:27:50 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 16:22:29 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int highest = -2147482648;
	unsigned int i = 0;
	
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > highest)
			highest = tab[i];
		i++;
	}
	return (highest);
}

#include <stdio.h>
int	main(void)
{
	int nums01[] = {-2, -3, -776, -9};
	printf("%d\n", max(nums01, 4));
	int nums02[] = {-2, 2147482649, 23, -9};
	printf("%d\n", max(nums02, 3));
	int nums03[] = {-2, 101, 23, 200, -2000, 4000, 3999, 89};
	printf("%d\n", max(nums03, 8));
}