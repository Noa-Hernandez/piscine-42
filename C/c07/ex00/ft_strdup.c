/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:19:42 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/07 18:29:39 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*strc;
	int		i;

	strc = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!strc)
		return (0);
	i = 0;
	while (src[i])
	{
		strc[i] = src[i];
		i++;
	}
	strc[i] = '\0';
	return (strc);
}
/*
int	main()
{
	char src[] = "La source est copiee dans la destination";
	char *dest;
	char *strc;

	printf("la source : %s\n", src);
	strc = ft_strdup(src);
	dest = strc;
	printf("la destination final : %s\n", dest);
	free(strc);
	return (0);
}
*/