#include <unistd.h>
#include <stdlib.h>
#include "globals.h"

// Fonction principale du programme
int main(int argc, char **argv)
{
    int *views_value;  // Tableau des valeurs de vues
    int **grid;  // Grille du jeu

    ft_isvalid_ac(argc);    // Vérifie le nombre d'arguments passés au programme
    views_value = ft_creat_and_init_views_value(argv[1]);  // Crée et initialise le tableau des valeurs de vues à partir de la chaîne d'arguments
    grid = ft_allocate_grid();    // Alloue dynamiquement la mémoire pour la grille du jeu
    ft_eval_solution(grid, views_value);    // Évalue et affiche la solution de la grille de gratte-ciels
    ft_cleanup(grid, views_value);    // Nettoie et libère la mémoire allouée pour la grille et les valeurs de vues
    return (0);  // Termine le programme avec succès
}
