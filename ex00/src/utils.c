#include <unistd.h>
#include <stdlib.h>
#include "globals.h"

// Vérifie le nombre d'arguments passés au programme
void ft_isvalid_ac(int ac)
{
    if (ac != 2)
    {
        write(1, "Error arg failed\n", 17);
        exit(1);
    }
}

// Crée et initialise le tableau des valeurs des vues à partir de la chaîne d'arguments
int *ft_creat_and_init_views_value(char *argv1)
{
    int i;
    int *views_value;

    i = 0;
    views_value = malloc(sizeof(int) * (SIZE * 4));
    if (views_value == NULL)
        ft_error_allocation();

    // Initialise les valeurs de vues à partir de la chaîne d'arguments
    while (i < (SIZE * 4))
    {
        views_value[i] = argv1[i * 2] - '0';
        if (views_value[i] < 1 || views_value[i] > SIZE)
        {
            free(views_value);
            write(1, "Error input value\n", 18);
            exit(1);
        }
        i++;
    }
    return (views_value);
}

// Gestion d'erreur pour l'allocation dynamique de mémoire
void ft_error_allocation()
{
    write(1, "Error allocation\n", 17);
    exit(1);
}

// Libère la mémoire allouée pour la grille et les valeurs de vues
void ft_cleanup(int **grid, int *views_value)
{
    ft_free_grid(grid);
    if (views_value != NULL)
        free(views_value);
}

// Évalue et affiche la solution trouvée pour la grille de gratte-ciels
void ft_eval_solution(int **grid, int *views_value)
{
    if (ft_solveGrid(grid, views_value, 0, 0) == 1) // Si une solution est trouvée
    {
        ft_print_grid(grid);
    }
    else
        write (1, "No solution\n", 13);
}

// Affiche la grille sur la sortie standard
void ft_print_grid(int **grid)
{
    int row;
    int column;

    row = 0;
    while (row < SIZE)
    {
        column = 0;
        while (column < SIZE)
        {
            write(1, &(char){grid[row][column] + '0'}, 1);
            column++;
        }
        write(1, "\n", 1);
        row++;
    }
}

// Fonction pour libérer la mémoire allouée pour la grille
void ft_free_grid(int **grid)
{
    int i;
    
    i = 0;
    while (i < SIZE)
    {
        free(grid[i]);
        i++;
    }
    free(grid);
}

// Initialise la grille avec des zéros
void ft_initialize_grid(int **grid)
{
    int row;
    int column;

    row = 0;
    while (row < SIZE)
    {
        column = 0;
        while (column < SIZE)
        {
            grid[row][column] = 0;
            column++;
        }
        row++;
    }
}

// Fonction pour allouer dynamiquement la grille
int **ft_allocate_grid(void)
{
    int row;
    int **grid;

    row = 0;
    grid = (int **)malloc(SIZE * sizeof(int *));
    if (grid == NULL)
        ft_error_allocation();
    while (row < SIZE)    // Alloue chaque ligne de la grille
    {
        grid[row] = (int *)malloc(SIZE * sizeof(int));
        if (grid[row] == NULL) 
            ft_error_allocation();
        row++;
    }
    ft_initialize_grid(grid);
    return (grid);
}