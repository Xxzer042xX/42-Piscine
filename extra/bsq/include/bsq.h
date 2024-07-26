#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

// Structure représentant une carte
typedef struct	s_map
{
	int		rows;      // Nombre de lignes dans la carte
	int		cols;      // Nombre de colonnes dans la carte
	char	empty;     // Caractère représentant une case vide
	char	obstacle;  // Caractère représentant un obstacle
	char	full;      // Caractère représentant une case remplie
	char	**grid;    // Grille représentant la carte (tableau 2D de caractères)
}				t_map;

// Structure pour stocker les informations sur la plus grande sous-matrice carrée trouvée
typedef struct	s_bsq_info
{
	int		max_size;  // Taille maximale de la sous-matrice carrée trouvée
	int		max_i;     // Indice de ligne du coin supérieur gauche de la sous-matrice
	int		max_j;     // Indice de colonne du coin supérieur gauche de la sous-matrice
}				t_bsq_info;

// Structure pour passer les paramètres lors du calcul de la solution BSQ
typedef struct	s_bsq_calc_params
{
	t_map		*map;     // Pointeur vers la structure de la carte
	int			**dp;     // Table de programmation dynamique pour le calcul
	t_bsq_info	*info;    // Structure pour stocker les informations BSQ
	int			i;        // Indice i utilisé dans les calculs
	int			j;        // Indice j utilisé dans les calculs
}				t_bsq_calc_params;

// Déclarations de fonctions dans map_reader.c
int		my_open(const char *pathname, int flags);
int		my_close(int fd);
int		read_first_line(int fd, t_map *map);
char	*read_map_line(int fd, int cols);
int		read_map_content(int fd, t_map *map);
int		read_map_from_file(char *filename, t_map *map);

// Déclarations de fonctions dans utils.c
void	ft_putnbr(int nbr);
void	display_map_info(t_map *map);
void	print_map(t_map *map);
void    print_test(void);
void	free_map(t_map *map);


// Déclarations de fonctions dans solve.c
void	solve_bsq(t_map *map);
int		**allocate_dp(t_map *map);
void	free_dp(int **dp, t_map *map);
void	calculate_bsq_helper(t_bsq_calc_params *params);
void	calculate_bsq(t_map *map, int **dp, t_bsq_info *info);
void	fill_bsq(t_map *map, int **dp, t_bsq_info *info);

#endif
