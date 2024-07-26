/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:23:37 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/12 20:23:37 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

//Fonction pour afficher un nombre entier sur la sortie standard
void ft_putnbr(int nbr) {
    char c;

    if (nbr >= 10)
        ft_putnbr(nbr / 10);  // Appel récursif pour diviser le nombre par 10
    c = nbr % 10 + '0';  // Conversion du chiffre unité en caractère ASCII
    write(1, &c, 1);  // Écriture du caractère sur la sortie standard
}

//Fonction pour afficher les informations de la carte
void display_map_info(t_map *map) {
    char buffer[256];  // Buffer pour le stockage temporaire des caractères

    // Affichage du nombre de lignes de la carte
    write(1, "Rows: ", 6);
    ft_putnbr(map->rows);
    write(1, "\n", 1);

    // Affichage du nombre de colonnes de la carte
    write(1, "Cols: ", 6);
    ft_putnbr(map->cols);
    write(1, "\n", 1);

    // Affichage du caractère représentant une case vide
    write(1, "Empty: ", 8);
    buffer[0] = map->empty;
    buffer[1] = '\n';
    write(1, buffer, 2);

    // Affichage du caractère représentant un obstacle
    write(1, "Obstacle: ", 11);
    buffer[0] = map->obstacle;
    buffer[1] = '\n';
    write(1, buffer, 2);

    // Affichage du caractère représentant une case remplie
    write(1, "Full: ", 6);
    buffer[0] = map->full;
    buffer[1] = '\n';
    write(1, buffer, 2);
}

//Fonction pour afficher la carte
void print_map(t_map *map) {
    int i, j;

    i = 0;
    // Parcours de toutes les lignes de la carte
    while (i < map->rows) {
        j = 0;
        // Parcours de toutes les colonnes de la ligne actuelle
        while (j < map->cols) {
            write(1, &(map->grid[i][j]), 1);  // Écriture du caractère sur la sortie standard
            j++;
        }
        write(1, "\n", 1);  // Nouvelle ligne après chaque ligne de la carte
        i++;
    }
}

//Fonction pour libérer la mémoire allouée à la carte
void free_map(t_map *map) {
    int i;

    i = 0;
    // Libération de chaque ligne de la carte
    while (i < map->rows) {
        free(map->grid[i]);
        i++;
    }
    free(map->grid);  // Libération du tableau de pointeurs de lignes
    map->grid = NULL;  // Réinitialisation du pointeur pour éviter les accès invalides
    map->rows = 0;  // Réinitialisation du nombre de lignes
    map->cols = 0;  // Réinitialisation du nombre de colonnes
    map->empty = '\0';  // Réinitialisation du caractère représentant une case vide
    map->obstacle = '\0';  // Réinitialisation du caractère représentant un obstacle
    map->full = '\0';  // Réinitialisation du caractère représentant une case remplie
}

void    print_test(void)
{
    write(1, "tvvmb\n", 6);
}