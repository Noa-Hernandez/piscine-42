/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:21:03 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 15:34:42 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char src[] = "Bonjour";
	char dest[] = "Wnrld";
	

	printf("La source : %s\n", src);
	printf("La destination : %s\n", dest);
	ft_strncpy(dest, src, 3);
	printf("La nouvelle destination : %s\n", dest);
	printf("Le resultat de strncpy : %s\n", strncpy(dest, src, 3));
	return (0);
}