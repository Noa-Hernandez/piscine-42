/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:42:03 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/26 15:23:21 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && --n > 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char    *s1;
    char    *s2;
    unsigned int n;  

    n = 5;

    s1 = "Identiquedhdfhfd";
    s2 = "Identiquedhdfhdf";

    printf("identique : %d\n", ft_strncmp(s1, s2, n));
    printf("strcmp : %d\n", strncmp(s1,s2, n));

    s1 = "Identiquesgsgfdsgdfsgsfhgfshfh";
    s2 = "Idenfhfddfhdfhdgh";

    printf("differente : %d\n", ft_strncmp(s1, s2, n));
	printf("strcmp : %d\n", strncmp(s1,s2, n));
    s1 = "Ideqtiquefdfghfdhdfghdfhfdh";
    s2 = "Identiquefhdfhfdfhdfhfdh";

    printf("differente : %d\n", ft_strncmp(s1, s2, n));
	printf("strcmp : %d\n", strncmp(s1,s2, n));
}
*/