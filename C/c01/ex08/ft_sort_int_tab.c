/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:51:39 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/08 15:01:43 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
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
/*
int	main()
{
	int tab[] = {4,8,6,2,3};
	int size = sizeof(tab) / sizeof(tab[0]);
	int i;

		i = 0;
	while (i < size)
	{
		i++;
	}

	ft_sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		i++;
	}
	return (0);
}
*/
