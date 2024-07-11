#include <unistd.h>
#include <stdlib.h>
#include "globals.h"

// Vérifie les indices des gratte-ciels depuis le haut
int ft_checkTopviews_value(int **grid, int *views_value)
{
    int visible;
    int max;
    int c;
    int r;

    c = 0;
    while (c < SIZE)
    {
        visible = 0;
        max = 0;
        r = 0;
        while (r < SIZE)
        {
            if (grid[r][c] > max)
            {
                max = grid[r][c];
                visible++;
            }
            r++;
        }
        if (visible != views_value[c])
            return (0);
        c++;
    }
    return (1);
}

// Vérifie les indices des gratte-ciels depuis le bas
int ft_checkBottomviews_value(int **grid, int *views_value)
{
    int visible;
    int max;
    int c;
    int r;
    
    c = 0;
    while (c < SIZE)
    {
        visible = 0;
        max = 0;
        r = SIZE - 1;
        while (r >= 0)
        {
            if (grid[r][c] > max)
            {
                max = grid[r][c];
                visible++;
            }
            r--;
        }
        if (visible != views_value[SIZE + c])
            return (0);
        c++;
    }
    return (1);
}

// Vérifie les indices des gratte-ciels depuis la gauche
int ft_checkLeftviews_value(int **grid, int *views_value)
{
    int visible;
    int max;
    int r;
    int c;

    r = 0;
    while (r < SIZE)
    {
        visible = 0;
        max = 0;
        c = 0;
        while (c < SIZE)
        {
            if (grid[r][c] > max)
            {
                max = grid[r][c];
                visible++;
            }
            c++;
        }
        if (visible != views_value[2 * SIZE + r])
            return (0);
        r++;
    }

    return (1);
}

// Vérifie les indices des gratte-ciels depuis la droite
int ft_checkRightviews_value(int **grid, int *views_value)
{
    int visible;
    int max;
    int r;
    int c;
    
    r = 0;
    while (r < SIZE)
    {
        visible = 0;
        max = 0;
        c = SIZE - 1;
        while (c >= 0)
        {
            if (grid[r][c] > max)
            {
                max = grid[r][c];
                visible++;
            }
            c--;
        }
        if (visible != views_value[3 * SIZE + r])
            return (0);
        r++;
    }
    return (1);
}

// Vérifie tous les indices des gratte-ciels
int ft_checkviews_value(int **grid, int *views_value)
{
    if ((ft_checkTopviews_value(grid, views_value) &&
        ft_checkBottomviews_value(grid, views_value) &&
        ft_checkLeftviews_value(grid, views_value) &&
        ft_checkRightviews_value(grid, views_value)) == 1)
        return (1);
    else
        return (0);
}