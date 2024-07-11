/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:30:28 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/02 20:33:02 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min + 1;
	array = (int *)malloc((size) * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int min = 0;
	int	max = 5;

	int *array = ft_range(min, max);
	if (!array)
	{
		printf("NULL\n");
		return (1);
	}
	printf("Plage de valeur :");
	int	i = 0;
	while (i < max - min + 1)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return 0;
}
*/
