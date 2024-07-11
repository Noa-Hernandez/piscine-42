/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:29:24 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 20:07:20 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while(src[length])
		length++;
	if (size < 1)
	return (length);
	while(src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}
#include <stdio.h>
int main()
{
	int	size = 5;
    char dest[2];
    char src[20] = "Ceci est la source";
    printf("la source est : %s\n", src);
    ft_strlcpy(dest, src, size);
    printf("la destination est : %s\n", dest);
}
