/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:35:00 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 20:07:18 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int	element;
	int	i;

	i = 0;
	while(i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = element;
		i++;
	}
}
#include <stdio.h>
int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	int	i;
	
	
	printf("Tableau dans l'ordre de base : ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");


	ft_rev_int_tab(tab, size);
	
	printf("Tableau inverser : ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
