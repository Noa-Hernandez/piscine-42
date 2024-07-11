/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:13:37 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/25 20:33:47 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char *s1;
	char *s2;

	s1 = "Est-ce identique ?";
	s2 = "Est-ce identique ?";
	printf("%s == %s alors retour = %d\n", s1,s2, ft_strcmp(s1,s2));
	printf("strcmp : %d\n", strcmp(s1,s2));

	s1 = "BIENVENUE";
	s2 = "bienvenue";
	printf("%s < %s alors retour = %d\n", s1,s2, ft_strcmp(s1,s2));
	printf("strcmp : %d\n", strcmp(s1,s2));

	s1 = "Comment tu t'appelles ?";
	s2 = "Quel age as-tu ?";
 	printf("%s > %s alors retour = %d\n", s1,s2, ft_strcmp(s1,s2));
	printf("strcmp : %d\n", strcmp(s1,s2));
}
*/