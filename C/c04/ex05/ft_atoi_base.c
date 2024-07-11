/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:24:18 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/27 18:20:34 by nohernan         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	bi;
	int	db;
	int	base_len;
	char c;
	
	if (ft_strlen(base) <= 1)
	{
		return ;
	}
	bi = 0;
	while (base[bi])
	{
		db = bi + 1;
		while (base[db])
		{
			if (base[bi] == base[db])
			{
				return;
			}
			db++;
		}
		bi++;
	}
	bi = 0;
	while (base[bi])
	{
		if (base[bi] == '-' || base[bi] == '+')
		{
			return ;
		}
		bi++;
	}
    
{
	int	conv_i;
	int	minus;

	conv_i = 0;
	minus = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			minus = minus * -1;
		}
			str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		conv_i = conv_i * 10 + *str - '0';
		str++;
	}
	return(conv_i * minus);
}
