/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:19:05 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 18:51:15 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (to_find[j] == '\0')
		return (str);
	while(str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	char	*source = "Ceci est un test";
	char	*find = "test";
	char	*resultat;

	resultat = ft_strstr(source, find);

	printf("la source est : %s\n", source);
	printf("l'element a trouver : %s\n", find);
	ft_strstr(source, find);
	printf("l'element trouve : %s\n", resultat);
}