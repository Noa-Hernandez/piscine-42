/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:01:33 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 19:32:56 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "0\n", 2);
		return (1);
	}
	int nb = 0;
	int	i = 0;
	while(argv[1][i])
	{
		nb = nb * 10 + (argv[1][i] - '0');
		i++;
	}
	if (nb <= 0)
	{
		write(1, "0\n", 2);
	}
	int	sum = 0;
	int j = 2;
	while (j <= nb)
	{
		if (is_prime(j))
			sum += j;
		j++;
 	}
	char str[10];
	int	len = 0;
	while (sum > 0)
	{
		str[len++] = '0' + (sum % 10);
		sum /= 10;
	}
	while (len > 0)
	{
		write(1, &str[--len], 1);
	}
	write(1, "\n", 1);
	return (0);
}