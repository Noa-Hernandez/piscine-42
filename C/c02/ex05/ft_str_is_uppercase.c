/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:18:59 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/25 14:38:46 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
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
    
    str = "ADGDAGDSAGDS";
    printf("%d\n", ft_str_is_uppercase(str));
}
*/
