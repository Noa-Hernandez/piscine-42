/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:01:18 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/26 15:16:25 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	di;
	unsigned int	si;

	si = 0;
	di = 0;
	while (dest[di] != '\0')
	{
		di++;
	}
	while (src[si] != '\0')
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "A 42";
	char	dest[50] = "Bienvenue ";

	ft_strcat(dest, src);
	printf("C'est la destination : %s\n", dest);
}
*/