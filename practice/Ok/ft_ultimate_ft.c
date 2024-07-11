/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:52:06 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 20:07:14 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
#include <stdio.h>
int	main()
{
	int	value;

	int	*ptr1 = &value;
	int **ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	printf("la valeur des pointeurs est %d", value);
}