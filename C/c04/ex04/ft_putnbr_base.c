/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:24:18 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/01 11:11:24 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	ft_check_base(char *base)
{
	int	bi;
	int	check_index;

	bi = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[bi])
	{
		if (base[bi] == '-' || base[bi] == '+')
			return (0);
		check_index = bi + 1;
		while (base[check_index])
		{
			if (base[bi] == base[check_index])
				return (0);
			check_index++;
		}
		bi++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	i;
	int	nbr_ws;
	char	result[32];

	i = 0;
	if (!ft_check_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr_ws = -nbr;
	}
	else
	{
		nbr_ws = nbr;
	}

	if (nbr_ws == 0)
		ft_putchar(base[0]);
	while (nb_ws)
	{
		result[i++]	= base[nbr_ws % base_len];
		nbr_ws = nbr_ws / base_len; 
	}
	while (i--)
		ft_putchar(result[i]);
}
/*
int main()
{
    ft_putnbr_base(123, "0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(123, "01");
    write(1, "\n", 1);
    ft_putnbr_base(-123, "0123456789ABCDEF");
    write(1, "\n", 1);
    ft_putnbr_base(123, "poneyvif");
    write(1, "\n", 1);
    return (0);
}
*/