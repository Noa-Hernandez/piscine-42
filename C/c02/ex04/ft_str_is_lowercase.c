/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:13:56 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/25 14:37:37 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
    char *str;
    
    str = "";
    printf("%d\n", ft_str_is_lowercase(str));
}
*/
