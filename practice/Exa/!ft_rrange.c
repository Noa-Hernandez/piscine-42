/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:32:30 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/11 11:59:09 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *array;
	int size;
	int	i;

	i = 0;
	size = end - start + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while(i <= size)
	{
		array[i] = end - i;
		i++;
	}
	return (array);
}

#include <stdio.h>
int	main ()
{
	int start = 1;
	int	end = 3;

	int *array = ft_rrange(start, end);
	printf("plage de valeur : ");
	int	i = 0;
	while (i < end - start + 1)
	{
		printf ("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);

}