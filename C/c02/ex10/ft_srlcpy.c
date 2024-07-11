/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:46:42 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/01 09:19:08 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	if (size < 1)
		return (length);
	while (src[i] && i < size - 1)
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
    char dest[30] = "ceci est la destination";
    char src[30] = "Ceci est la source";
    printf("la source est : %s\n", src);
    ft_strlcpy(dest, src, 60);
    printf("la destination est : %s\n", dest);
}

