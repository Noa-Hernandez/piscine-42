/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:15:06 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 15:20:18 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char src[] = "Bonjour";
	char dest[] = "";

	printf("La source : %s\n", src);
	printf("La destination : %s\n", dest);
	ft_strcpy(dest, src);
	printf("La nouvelle destination : %s\n", dest);
}