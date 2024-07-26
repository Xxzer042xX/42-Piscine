/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:37:36 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/12 18:37:36 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"  // Inclusion de l'en-tête bsq.h qui contient les déclarations nécessaires

// Fonction d'allocation du tableau dp
int **allocate_dp(t_map *map)
{
    int **dp;
    int i;

    // Allocation de la mémoire pour dp
    dp = malloc(map->rows * sizeof(int *));
    i = 0;
    while (i < map->rows)
    {
        dp[i] = malloc(map->cols * sizeof(int));
        i++;
    }
    return dp;
}

// Fonction de libération du tableau dp
void free_dp(int **dp, t_map *map)
{
    int i;

    // Libération de la mémoire allouée pour chaque ligne de dp
    i = 0;
    while (i < map->rows)
    {
        free(dp[i]);
        i++;
    }
    free(dp);
}

// Fonction d'aide pour le calcul du plus grand carré vide
void calculate_bsq_helper(t_bsq_calc_params *params)
{
    t_map *map = params->map;
    int **dp = params->dp;
    t_bsq_info *info = params->info;
    int i = params->i;
    int j = params->j;

    // Vérification si la case actuelle est vide
    if (map->grid[i][j] == map->empty)
    {
        // Calcul du plus petit des trois voisins + 1
        int min_value = dp[i - 1][j];
        if (dp[i][j - 1] < min_value)
        {
            min_value = dp[i][j - 1];
        }
        if (dp[i - 1][j - 1] < min_value)
        {
            min_value = dp[i - 1][j - 1];
        }
        dp[i][j] = 1 + min_value;

        // Mise à jour de info si on a trouvé une taille de carré plus grande
        if (dp[i][j] > info->max_size)
        {
            info->max_size = dp[i][j];
            info->max_i = i;
            info->max_j = j;
        }
    }
    else
    {
        dp[i][j] = 0;  // Sinon, la case ne peut pas faire partie d'un carré vide
    }
}

// Fonction de calcul du plus grand carré vide
void calculate_bsq(t_map *map, int **dp, t_bsq_info *info)
{
    int i;
    int j;

    i = 0;
    while (i < map->rows)
    {
        j = 0;
        while (j < map->cols)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = (map->grid[i][j] == map->empty) ? 1 : 0;  // Initialisation des bords du tableau dp
            }
            else
            {
                t_bsq_calc_params params = {map, dp, info, i, j};
                calculate_bsq_helper(&params);  // Appel de la fonction d'aide pour calculer dp[i][j]
            }
            j++;
        }
        i++;
    }
}

// Fonction de remplissage du plus grand carré dans la carte
void fill_bsq(t_map *map, int **dp, t_bsq_info *info)
{
    (void)dp;  // Suppression du warning "unused parameter"
    int i;

    i = info->max_i;
    while (i > info->max_i - info->max_size)
    {
        int j;

        j = info->max_j;
        while (j > info->max_j - info->max_size)
        {
            map->grid[i][j] = map->full;  // Remplacement des cases par le caractère représentant le carré rempli
            j--;
        }
        i--;
    }
}

// Fonction principale pour résoudre le problème BSQ
void solve_bsq(t_map *map)
{
    int **dp;     // Tableau de programmation dynamique pour stocker les résultats intermédiaires
    t_bsq_info info;  // Structure pour stocker les informations sur la plus grande sous-matrice carrée trouvée

    info.max_size = 0;  // Initialisation de la taille maximale du carré trouvé à 0
    info.max_i = 0;     // Initialisation des indices de la position du carré trouvée à 0
    info.max_j = 0;

    dp = allocate_dp(map);  // Allocation mémoire pour le tableau dp
    calculate_bsq(map, dp, &info);  // Calcul du plus grand carré vide
    fill_bsq(map, dp, &info);       // Remplissage du plus grand carré dans la carte
    free_dp(dp, map);              // Libération de la mémoire allouée pour dp
}
