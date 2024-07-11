/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comm_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:07:32 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 18:23:40 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str) // Calcule la taille d'une chaine et renvoi la longueur
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strcpy(char *dest, char *src) // Copie la str source dans la str dest et renvoi ldifiea dest mo
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i]; // Copie le char src dans la dest a la bonne place 
		i++; // lettre suivante
	}
	dest[i] = '\0'; // ajoute char de fin a la dest modifie pour confirmer que c'est bon
	return (dest); 
}

int	ft_final_total_size(int size, char **strs, char *sep) // calcule la taille totale des str combine
{
	int	i; // Index de phrase
	int	total_size; //taille totale des phrases

	total_size = 0;
	i = 0;
	while (i < size) // tant que index n'a pas atteint la taille totale
	{
		total_size += ft_strlen(strs[i]); // Ajout taille phrase actuelle a la taille totale
		i++; // passage phrase suivante
	}
	total_size += (size - 1) * ft_strlen(sep); // Ajout taille sep multi par nombre de phrase -1 
	return (total_size);
}

void	ft_copy_final_str(char *final_dest, int size, char **strs, char *sep) // copie toutes les str dans final + ajout sep
{
	int	i; // Index de phrase

	i = 0;
	while (i < size) // tant que pas traite toutes les phrases
	{
		ft_strcpy(final_dest, strs[i]); // copie phrase actuelle dans la phrase de dest final
		final_dest += ft_strlen(strs[i]);  // deplace le pointeur de phrase dest pour continuer copier a la bonne place
		if (i < size - 1) // si ce n'est pas la derniere phrase 
		{
			ft_strcpy(final_dest, sep); // copie sep dans la phrase dest a la suite 
			final_dest += ft_strlen(sep);
		}
		i++; // phrase suivante
	}
}

char	*ft_strjoin(int size, char **strs, char *sep) // cree la phrase finale en ajoutant strs et sep
{
	int		total_size;
	char	*final_dest; 

	if (size == 0) // si pas de phrase
	{
		final_dest = malloc(1); // cree phrase vide
		if (!final_dest) // test OBLIGATOIRE si malloc echoue 
			return (NULL);
		*final_dest = '\0';
		return (final_dest); //retourne phrase vide
	}
	total_size = ft_final_total_size(size, strs, sep); //calcule de la taille phrase finale
	final_dest = malloc((total_size + 1) * sizeof(char)); // alloue memoire pour phrase finale +1 pour '\0'
	if (!final_dest) 
		return (NULL);
	ft_copy_final_str(final_dest, size, strs, sep); //Copie les phrases strs dans la phrase final avec sep
	*(final_dest + total_size) = '\0'; //ajout du marquer de fin a la fin de la phrase finale
	return (final_dest); //return phrase finale 
}
