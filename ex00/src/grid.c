#include <unistd.h>
#include <stdlib.h>
#include "globals.h"

// Vérifie tous les indices des gratte-ciels
int ft_checkviews_value(int **grid, int *views_value)
{
    if (ft_checkTopviews_value(grid, views_value) &&
        ft_checkBottomviews_value(grid, views_value) &&
        ft_checkLeftviews_value(grid, views_value) &&
        ft_checkRightviews_value(grid, views_value) == 1)
        return (1);
    else
        return (0);
}

// Vérifie si un nombre peut être placé en toute sécurité dans une case donnée
int ft_isSafe(int **grid, int row, int col, int num)
{
    int x;
    
    x = 0;
    while (x < SIZE)    // Vérifie la ligne et la colonne
    {
        if (grid[row][x] == num || grid[x][col] == num)
            return (0);
        x++;
    }
    return (1);
}

// Résout récursivement la grille des gratte-ciels
int ft_solveGrid(int **grid, int *views_value, int row, int col)
{
    int num;
    
    num = 1;
    if (row == SIZE)    // Si on a atteint la fin de la grille, on retourne vrai
        return (1);
    if (col == SIZE)    // Si on a atteint la fin d'une ligne, on passe à la ligne suivante
        return (ft_solveGrid(grid, views_value, row + 1, 0));    
    while (num <= SIZE)    // Essaye tous les chiffres possibles
    {
        if (ft_isSafe(grid, row, col, num) == 1)
        {
            grid[row][col] = num; 
            if (row == SIZE - 1 && col == SIZE - 1)   // Si on est à la dernière case, vérifie si la grille complète est correcte
            {
                if (ft_checkviews_value(grid, views_value) == 0)
                {
                    grid[row][col] = 0;  // Backtrack
                    num++;
                    continue;
                }
            }   
            if (ft_solveGrid(grid, views_value, row, col + 1) == 1)    // Résoud récursivement la grille
                return (1);
            grid[row][col] = 0;            // Backtrack
        }
        num++;
    }
    return (0);
}
