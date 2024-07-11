/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:11:26 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 12:53:23 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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
	char	*dest;
	int		i;	

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[ac].str = 0;
	tab[ac].copy = 0;
	return (tab);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	struct s_stock_str *tab;
	int	i;
	
	if (ac < 2)
	{
		printf("Utilise : %s <str1> <str2>... \n", av[0]);
		return (1);
	}
	tab = ft_strs_to_tab(ac, av);

	if (!tab)
	{
		printf("Erreur dans l'allocation de memoire\n");
		return (1);
	}
	i = 0;
	while (i < ac)
	{
		printf("str %d: %s (size: %d)\n", i, tab[i].str, tab[i].size);
		printf("Copy %d: %s\n", i, tab[i].copy);
		i++;
	}
	i = 0;
	while (i < ac)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return 0;
}
*/