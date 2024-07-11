#include <unistd.h>

int main(int	argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while(argv[1][i])
			{
				if(argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*

int main(int argc, char *argv[]) // Définition de la fonction principale
{
    int i; // Déclaration d'une variable entière pour parcourir les chaînes
    i = 0; // Initialisation de l'index à 0
    if (argc == 4) // Vérification du nombre d'arguments
    {
        if (!argv[2][1] &&!argv[3][1]) // Vérification de la longueur des arguments 2 et 3
        {
            while(argv[1][i]) // Boucle pour parcourir la chaîne de caractères
            {
                if(argv[1][i] == argv[2][0]) // Vérification du caractère courant
                    write(1, &argv[3][0], 1); // Écriture du caractère de remplacement
                else
                    write(1, &argv[1][i], 1); // Écriture du caractère original
                i++; // Incrémentation de l'index
            }
        }
    }
    write(1, "\n", 1); // Écriture d'un retour à la ligne
    return (0); // Retour de la valeur 0 pour indiquer la réussite
}
*/