/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:08:47 by yourlogin         #+#    #+#             */
/*   Updated: 2024/06/25 14:36:01 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		str++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    char    *str;

    str = "";
    printf("%d\n", ft_str_is_numeric(str));
}
*/
