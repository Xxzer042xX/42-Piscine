/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:03:13 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/12 13:03:13 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"  // Inclusion de l'en-tête bsq.h qui contient les déclarations nécessaires

// Fonction d'ouverture de fichier
int my_open(const char *pathname, int flags) {
    int fd;
    
    fd = open(pathname, flags);
    return fd;
}

// Fonction de fermeture de fichier
int my_close(int fd) {
    int result = close(fd);
    return result;
}

// Fonction pour lire la première ligne de la carte et extraire ses informations
int read_first_line(int fd, t_map *map) {
    char buffer[256];  // Buffer pour stocker la ligne lue
    int i = 0;
    char c;

    // Lecture caractère par caractère jusqu'au '\n' ou la fin du fichier
    while (read(fd, &c, 1) > 0 && c != '\n') {
        buffer[i++] = c;
    }
    buffer[i] = '\0';  // Terminaison de la chaîne de caractères avec '\0'

    // Vérification de la longueur minimale attendue
    if (i < 4) {
        return -1; // Ligne invalide
    }

    // Extraction des informations de la carte à partir de la ligne lue
    map->rows = atoi(buffer);        // Nombre de lignes de la carte
    map->empty = buffer[i - 3];      // Caractère représentant une case vide
    map->obstacle = buffer[i - 2];   // Caractère représentant un obstacle
    map->full = buffer[i - 1];       // Caractère représentant une case remplie
    return 0;
}

// Fonction pour lire une ligne de la carte
char *read_map_line(int fd, int cols) {
    char *line = malloc(cols + 1);  // Allocation d'un buffer pour la ligne avec un caractère supplémentaire pour '\0'
    char c;
    int i = 0;

    if (!line) {
        return NULL;  // Retourne NULL en cas d'échec d'allocation
    }

    // Lecture caractère par caractère jusqu'au '\n' ou la fin du fichier
    while (read(fd, &c, 1) > 0 && c != '\n') {
        line[i++] = c;
    }
    line[i] = '\0';  // Terminaison de la chaîne de caractères avec '\0'

    return line;
}

// Fonction pour lire le contenu de la carte après la première ligne
int read_map_content(int fd, t_map *map) {
    map->grid = malloc(sizeof(char *) * map->rows);  // Allocation pour les lignes de la carte
    if (!map->grid) {
        return -1;  // Retourne -1 en cas d'échec d'allocation
    }

    // Lecture de chaque ligne de la carte
    for (int i = 0; i < map->rows; i++) {
        map->grid[i] = read_map_line(fd, map->cols);  // Lecture d'une ligne de la carte
        if (!map->grid[i]) {
            return -1;  // Retourne -1 si la lecture de la ligne échoue
        }
    }

    return 0;
}

// Fonction principale pour lire une carte à partir d'un fichier ou de l'entrée standard
int read_map_from_file(char *filename, t_map *map)
{
    int fd;
        
    if (filename)
    {
        fd = my_open(filename, O_RDONLY);  // Ouverture du fichier en lecture seule
        if (fd < 0)
        {
            write(STDERR_FILENO, "map error\n", 10);  // Écriture d'un message d'erreur sur la sortie d'erreur standard
            return -1;
        }
    }
    else
    {
        fd = STDIN_FILENO; // Utilisation de l'entrée standard si aucun fichier spécifié
    }
    // Lecture de la première ligne pour obtenir les informations de la carte
    if (read_first_line(fd, map) < 0) {
        write(STDERR_FILENO, "map error\n", 10);  // Écriture d'un message d'erreur sur la sortie d'erreur standard
        if (filename) my_close(fd);  // Fermeture du fichier si ouvert
        return -1;
    }
    // Lecture du contenu de la carte
    if (read_map_content(fd, map) < 0) {
        write(STDERR_FILENO, "map error\n", 10);  // Écriture d'un message d'erreur sur la sortie d'erreur standard
        if (filename) my_close(fd);  // Fermeture du fichier si ouvert
        return -1;
    }
    if (filename) {
        my_close(fd);  // Fermeture du fichier si ouvert
    }
    return 0;
}
