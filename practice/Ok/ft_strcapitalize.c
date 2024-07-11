/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:15:16 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/04 16:26:55 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int new_word;

	i = 0;
	while (str[i])
	{
		if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
		|| (str[i] > 90 && str[i] < 97) || str[i] > 122)
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return(str);
}

#include <stdio.h>
int main()
{
    char    str1[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Phrase avant : %s\n", str1);
    printf("Phrase apres : %s\n", ft_strcapitalize(str1));
}
