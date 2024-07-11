/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:47:49 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 17:59:27 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while(str[length])
		length++;
	return (length);
}


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlength;
	unsigned int	slength;

	i = 0;
	j = 0;
	while(dest[i])
	{
		i++;
	}
	dlength = i;
	slength = ft_strlen(src);
	if (size == 0 || size <= dlength)
		return (slength + dlength);
	
	while(src[j] && j < size - dlength - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlength + slength);
}
#include <stdio.h>
int main()
{
	int	size = 50;
    char dest[44] = "Ceci est la destination";
    char src[20] = " Ceci est la source";
    printf("la source est : %s\n", src);
    ft_strlcat(dest, src, size);
    printf("la destination est : %s\n", dest);
}