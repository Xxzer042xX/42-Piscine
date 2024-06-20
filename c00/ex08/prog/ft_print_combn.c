#include <unistd.h> // Inclut la bibliothèque unistd.h, nécessaire pour la fonction write

// Fonction principale pour générer et afficher toutes les combinaisons de n chiffres
void ft_print_combn(int n)
{
    int pos = 0;
    char current = '0';
    char str[10];

    // Fonction récursive interne pour générer les combinaisons
    void generate_combinations(int pos, char current)
    {
        // Si la position actuelle est égale à n, on a généré une combinaison complète
        if (pos == n)
        {
            write(1, str, n);
            // Si le premier caractère n'est pas le dernier possible pour cette longueur de combinaison, ajoute une virgule et un espace
            if (str[0] != '9' - n + 1)
                write(1, ", ", 2);
            return;
        }

        str[pos] = current; // Assigne le caractère courant à la position actuelle de la combinaison
        // Si le caractère courant est inférieur ou égal à '9'
        if (current <= '9')
        {
            // Appelle récursivement la fonction pour la position suivante avec le caractère suivant
            generate_combinations(pos + 1, current + 1);
            // Si le caractère suivant est encore valide, appelle récursivement la fonction pour la même position avec le caractère suivant
            if (current + 1 <= '9')
                generate_combinations(pos, current + 1);
        }
    }

    // Début du traitement dans ft_print_combn
    generate_combinations(pos, current); // Démarre la génération des combinaisons avec les valeurs initialisées
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] > '0')
        ft_print_combn(av[1][0] - 48);
    else
        write(1, "lol\n", 4);
    return (0);
}
