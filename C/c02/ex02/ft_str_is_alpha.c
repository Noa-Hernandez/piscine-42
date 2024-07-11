/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:08:50 by yourlogin         #+#    #+#             */
/*   Updated: 2024/06/29 14:43:00 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && *str <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	char *str = "gdsgsd54523gTEGDSTESTG";
	printf("%d\n", ft_str_is_alpha(str));
}
