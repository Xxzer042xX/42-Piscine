#include <unistd.h>
#include <stdlib.h>

// Fonction pour écrire une combinaison et le séparateur
void	write_comb(char *str, int n, int is_last)
{
	write(1, str, n);  // Écrit la combinaison sur la sortie standard
	if (!is_last)
		write(1, ", ", 2);  // Si ce n'est pas la dernière combinaison, ajoute une virgule et un espace
}

// Fonction pour vérifier si la combinaison actuelle est la dernière
int	is_last_comb(char *str, int n)
{
	return (str[0] == '9' - n + 1);  // Vérifie si le premier chiffre de la combinaison est celui attendu pour la dernière combinaison
}

// Fonction principale pour générer et imprimer toutes les combinaisons de n chiffres
void	ft_print_combn(int n)
{
	char str[n + 1];  // Tableau pour stocker la combinaison de chiffres, plus un pour le caractère nul de fin de chaîne
	int stack[n];  // Tableau pour stocker les valeurs actuelles des positions dans la combinaison
	int pos;
	int nbr;

	str[n] = '\0';
	pos = 0;
	nbr = '0';
	if (n < 1 || n > 9)
		return;
	while (1)
	{
		if (pos == n)  // Si toutes les positions sont remplies
		{
			write_comb(str, n, is_last_comb(str, n));  // Écrire la combinaison actuelle
			if (pos == 0)  // Si on est de retour à la position de départ, terminer la boucle
				break;
			pos--;  // Retourner à la position précédente
			nbr = stack[pos] + 1;  // Passer au chiffre suivant pour cette position
		}
		else if (nbr <= '9')  // Si la valeur actuelle du chiffre est valide
		{
			str[pos] = nbr;  // Ajouter le chiffre à la position actuelle
			stack[pos] = nbr;  // Stocker la valeur du chiffre dans le tableau de pile
			pos++;  // Passer à la position suivante
			nbr++;  // Incrémenter le chiffre
		}
		else
		{
			if (pos == 0)  // Si on est de retour à la position de départ, terminer la boucle
				break;
			pos--;  // Retourner à la position précédente
			nbr = stack[pos] + 1;  // Passer au chiffre suivant pour cette position
		}
	}
}

// Fonction principale du programme
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_combn(atoi(argv[1]));
	return 0;
}
