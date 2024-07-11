/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:59:16 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 17:06:38 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

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
    printf("strncmp : %d\n", strncmp(s1,s2, n));

    s1 = "Identiquesgsgfdsgdfsgsfhgfshfh";
    s2 = "Idenfhfddfhdfhdgh";

    printf("differente : %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp : %d\n", strncmp(s1,s2, n));
    s1 = "Ideqtiquefdfghfdhdfghdfhfdh";
    s2 = "Identiquefhdfhfdfhdfhfdh";

    printf("differente : %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp : %d\n", strncmp(s1,s2, n));
}