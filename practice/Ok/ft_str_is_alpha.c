/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:35:36 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 20:12:59 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
		i++;
		}
		else
			return(0);
		
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_alpha(""));

	return(0);
}