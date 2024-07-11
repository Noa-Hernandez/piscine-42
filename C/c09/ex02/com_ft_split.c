/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   com_ft_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:21:42 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/07 13:15:54 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in_charset(char c, char *charset) // verifie si le caractere actuel est present dans le charset
{
	int	i;

	i = 0;
	while (charset[i]) 
	{
		if (charset[i] == c) //si 1ere lettre du charset = cara actuel de str 
			return (1); // return 1 = trouve
		i++; // sinon passe au cara suivant de charset
	}
	return (0); // sinon return 0 si cara actuel de str n'est pas dans charset.
}

int	count_string(char *str, char *charset) //compte le nombre de sous-chaine dans str
{
	int	count; // compteur nombre de sous-chaines 
	int	i;

	count = 0;
	i = 0;
	while (str[i]) //va jusqu'au bout de str
	{
		while (str[i] && is_in_charset(str[i], charset)) // tant que le cara actuel str est dans charset
			i++; // passe au cara suivant
		if (str[i]) // si le cara actuel n'est pas la fin de la chaine 
			count++; //incremente le compteur sous-chaine 
		while (str[i] && !is_in_charset(str[i], charset)) // tant que le cara actuel n'est pas dans charset
			i++; // cara suivant
	}
	return (count); // nombre de sous-chaine trouve
}

char	*ft_strncpy(char *dest, char *src, int size) // copie une partie d'une chaine dans une autre 
{
	int	i;

	i = 0;
	while (src[i] && i < size) // avance tant que pas la fin de src ou moins que la taille definie (pour n cara)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i] = '\0'; //termine la chaine de cara avec \0
	return (dest); //return la chaine de cara copiee
}

char	*get_string(char *str, char *charset) //extrait la prochaine sous-chaine 
{
	int		i;
	char	*string; //chaine de cara pour stocker la sous-chaine 

	i = 0;
	while (str[i] && !is_in_charset(str[i], charset)) //tant que le cara actu n'est pas un charset
		i++;
	string = malloc((i + 1) * sizeof(char)); //malloc pour la chaine trouve + 1 pour le \0
	if (!string)
		return (NULL);
	ft_strncpy(string, str, i - 1); // copie la sous-chaine dans la memoire allouee 
	string[i] = '\0'; //termine sous chaine par cara \0
	return (string); // return la sous-chaine 
}

char	**ft_split(char *str, char *charset) // split la str en sous-chaine selon charset(sep)
{
	char	**tab; // tab de chaine pour stocker les sous-chaines 
	int		count; //stocker le nbr de sous-chaines 
	int		i; //parcourir le tableau de sous-chaine 

	i = 0;
	count = count_string(str, charset); // count = le nombre de sous-chaine 
	tab = malloc((count + 1) * sizeof(char *)); //malloc pour le tableau
	if (!tab)
		return (NULL);
	while (count--) //extraire les sous-chaines 
	{
		tab[i] = get_string(str, charset); //extraire la prochaine sous-chaine 
		while (*str && !is_in_charset(*str, charset)) //incremente le pointeur pour passer a la prochaine sous-chaine 
			str++;
		while (*str && is_in_charset(*str, charset)) //incremente le pointeur pour passer les cara de sep
			str++;
		i++; // incremente l'index pour p
	}
	tab[i] = 0; //marquer la fin du tableau 
	return (tab); //return le tableau de sous-chaine 
}

int	main ()
{
	char str[] = "hello,word,foo,bar";
	char charset[] = ",";

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