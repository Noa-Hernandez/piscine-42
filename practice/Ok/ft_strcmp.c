/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:53:01 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 16:58:00 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

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