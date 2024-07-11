/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:21:04 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/26 15:15:49 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	di;
	unsigned int	si;

	di = 0;
	si = 0;
	while (dest[di] != '\0')
	{
		di++;
	}
	while (src[si] != '\0' && si < nb)
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
	char	dest[20] = "Born";
	char	src[] = " 2 code";
	unsigned int	nb;
	nb = 10;
	ft_strncat(dest, src, nb);
	printf("La chaine finale : %s\n", dest);
}
*/