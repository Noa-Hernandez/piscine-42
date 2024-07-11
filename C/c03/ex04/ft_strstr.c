/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:42:49 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 17:26:10 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	bi;
	unsigned int	fi;

	bi = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[bi] != '\0')
	{
		fi = 0;
		while (str[bi + fi] == to_find[fi])
		{
			if (to_find[fi + 1] == '\0')
			{
				return (str + bi);
			}
			fi++;
		}
		bi++;
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
