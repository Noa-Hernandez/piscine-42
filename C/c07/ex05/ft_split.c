/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:21:42 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/07 18:46:20 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_string(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_in_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*get_string(char *str, char *charset)
{
	int		i;
	char	*string;

	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
		i++;
	if (i == 0)
		return (NULL);
	string = malloc((i + 1) * sizeof(char));
	if (!string)
		return (NULL);
	ft_strncpy(string, str, i);
	string[i] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		count;
	int		i;

	i = 0;
	count = count_string(str, charset);
	tab = malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*str && is_in_charset(*str, charset))
		str++;
	while (count--)
	{
		tab[i] = get_string(str, charset);
		while (*str && !is_in_charset(*str, charset))
			str++;
		while (*str && is_in_charset(*str, charset))
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main ()
{
	char str[] = "hello,,wor,d,foo,bar";
	char charset[] = ",,";

	char **tab = ft_split(str, charset);

	int	i = 0;
	while (tab[i])
	{
		printf("string %d: %s\n", i,  tab[i]);
		i++;
	}

	for (i = 0; tab[i]; i++)
		free(tab[i]);
	free(tab);

	return(0);
}
*/