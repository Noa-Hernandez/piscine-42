/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:46:40 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/19 19:21:23 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_number(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		print_number(i + '0'); 
		i++;
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);
}
