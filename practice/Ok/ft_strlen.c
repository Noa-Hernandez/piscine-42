/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:28:01 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 20:07:16 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return (length);
}
#include <stdio.h>
int	main()
{
	char *str = "Cette chaine est longue";
	printf("La longueur est de : %d", ft_strlen(str));
}