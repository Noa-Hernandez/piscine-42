/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:00:13 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 20:07:10 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		i++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_numeric("44543fsdfds6356"));

	return(0);
}