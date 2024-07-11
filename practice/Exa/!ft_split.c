/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:50:33 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/11 10:57:28 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' '|| c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	return (count);
}

char *create_word(char *str, int *index)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i]))
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	*index += i;
	return (word);
}

char **ft_split(char *str)
{
	char **final;
	int	i;
	int	word_index;

	if (!str)
		return (NULL);

	i = 0;
	word_index = 0;
	final = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!final)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
		{
			final[word_index] = create_word(str + i, &i);
			if (!final[word_index])
				return (NULL);
			word_index++;
		}
	}
	final[word_index] = 0;
	return (final);
}


/*
#include <stdlib.h>

/**
 * Vérifie si un caractère est un séparateur (espace, tabulation, nouvelle ligne).
 */
int is_sep(char c)
{
    // Retourne vrai si le caractère est un espace, une tabulation ou une nouvelle ligne
    return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * Compte le nombre de mots dans une chaîne de caractères.
 */
int count_words(char *str)
{
    int i; // Index pour parcourir la chaîne de caractères
    int count; // Compteur de mots

    i = 0; // Initialise l'index à 0
    count = 0; // Initialise le compteur à 0
    while (str[i]) // Tant que la chaîne de caractères n'est pas terminée
    {
        while (str[i] && is_sep(str[i])) // Tant que le caractère est un séparateur
            i++; // Incrémente l'index
        if (str[i]) // Si le caractère n'est pas un séparateur
        {
            count++; // Incrémente le compteur de mots
            while (str[i] && !is_sep(str[i])) // Tant que le caractère n'est pas un séparateur
                i++; // Incrémente l'index
        }
    }
    return (count); // Retourne le nombre de mots
}

/**
 * Crée un nouveau mot à partir d'un sous-ensemble de la chaîne de caractères.
 */
char *create_word(char *str, int *index)
{
    char *word; // Nouveau mot à créer
    int i; // Index pour parcourir le sous-ensemble de la chaîne de caractères

    i = 0; // Initialise l'index à 0
    while (str[i] && !is_sep(str[i])) // Tant que le caractère n'est pas un séparateur
        i++; // Incrémente l'index
    word = malloc(i + 1); // Alloue de la mémoire pour le nouveau mot
    if (!word) // Si l'allocation a échoué
        return (NULL); // Retourne NULL
    i = 0; // Réinitialise l'index à 0
    while (str[i] && !is_sep(str[i])) // Tant que le caractère n'est pas un séparateur
    {
        word[i] = str[i]; // Copie le caractère dans le nouveau mot
        i++; // Incrémente l'index
    }
    word[i] = '\0'; // Termine le nouveau mot avec un caractère nul
    *index += i; // Incrémente l'index global
    return (word); // Retourne le nouveau mot
}

/**
 * Divise une chaîne de caractères en un tableau de mots.
 */
char **ft_split(char *str)
{
    if (!str) // Si la chaîne de caractères est nulle
        return (NULL); // Retourne NULL

    char **final; // Tableau de mots à créer
    int i; // Index pour parcourir la chaîne de caractères
    int word_index; // Index pour le tableau de mots

    i = 0; // Initialise l'index à 0
    word_index = 0; // Initialise l'index du tableau de mots à 0
    final = malloc(sizeof(char *) * (count_words(str) + 1)); // Alloue de la mémoire pour le tableau de mots
    if (!final) // Si l'allocation a échoué
        return (NULL); // Retourne NULL
    while (str[i]) // Tant que la chaîne de caractères n'est pas terminée
    {
        while (str[i] && is_sep(str[i])) // Tant que le caractère est un séparateur
            i++; // Incrémente l'index
        if (str[i]) // Si le caractère n'est pas un séparateur
        {
            final[word_index] = create_word(str + i, &i); // Crée un nouveau mot et l'ajoute au tableau
            if (!final[word_index]) // Si la création du mot a échoué
                return (NULL); // Retourne NULL
            word_index++; // Incrémente l'index du tableau de mots
        }
    }
    final[word_index] = 0; // Termine le tableau de mots avec un pointeur nul
    return (final); // Retourne le tableau
*/