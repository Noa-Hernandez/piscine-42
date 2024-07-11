/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:02:51 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/29 15:01:04 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	char			next_word;

	i = 0;
	next_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next_word == 1 && c >= 97 && c <= 122)
			str[i] = str[i] - 32;
		else if (next_word == 0 && c >= 65 && c <= 90)
			str[i] = str[i] + 32;
		if (c < 48 || (c > 57 && c < 65)
			|| (c > 90 && c < 97) || c > 122)
			next_word = 1;
		else
			next_word = 0;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
    char    str1[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Phrase avant : %s\n", str1);
    printf("Phrase apres : %s\n", ft_strcapitalize(str1));
}