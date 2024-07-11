/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:56:21 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 15:03:35 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
			ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int	main()
{
	int	tab[] = {10, 2, 5, 13, 4};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i;
	
	printf("Tableau dans l'ordre de base : ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");


	ft_sort_int_tab(tab, size);
	
	printf("Tableau trier : ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}