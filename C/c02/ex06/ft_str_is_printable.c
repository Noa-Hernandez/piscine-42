/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:45:09 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/25 14:39:50 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		str++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
    char    *str;

    str = "";
    printf("%d\n", ft_str_is_printable(str));
}
*/
