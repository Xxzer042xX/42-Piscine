/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 02:42:40 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/12 02:42:40 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int main(int argc, char **argv)
{
    t_map map;
    int i;

    i = 1;
    if (argc < 2)
    {
        // Si aucun argument n'est passé, lire la carte depuis l'entrée standard
        if (read_map_from_file(NULL, &map) == 0)// Lire depuis stdin
        {
            display_map_info(&map);
            solve_bsq(&map);     // Résoudre le problème BSQ pour la carte lue
            print_map(&map);     // Afficher la carte avec la solution trouvée
            free_map(&map);      // Libérer la mémoire allouée pour la carte
        }
    }
    else
    {
        // Pour chaque fichier passé en argument
        while (i < argc)
        {
            if (read_map_from_file(argv[i], &map) == 0)
            {  // Lire la carte à partir du fichier
                display_map_info(&map);
                solve_bsq(&map);           // Résoudre le problème BSQ pour la carte lue
                print_map(&map);           // Afficher la carte avec la solution trouvée
                free_map(&map);            // Libérer la mémoire allouée pour la carte
            }
            else
                write(STDERR_FILENO, "map error\n", 10);  // Afficher un message d'erreur si la lecture échoue
            i++;
            if (i < argc)
                write(1, "\n", 1);
        }
    }
    return (0);
}
