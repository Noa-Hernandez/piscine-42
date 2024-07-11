/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:13:32 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 17:17:10 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while(dest[i])
	{
		i++;
	}
	j = 0;
	while(src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main()
{
	char	dest[20] = "Born";
	char	src[] = " 2 code";
	unsigned int	nb;
	nb = 3;
	ft_strncat(dest, src, nb);
	printf("La chaine finale : %s\n", dest);
}