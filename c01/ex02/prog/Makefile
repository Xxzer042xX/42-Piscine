/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:58:16 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 21:58:16 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# Nom de l'exécutable à créer
NAME = my_program

# Compilateur
CC = gcc

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Fichiers source
SRC = main.c ft_math.c ft_io.c

# Fichiers objets
OBJ = $(SRC:.c=.o)

# Règle par défaut
all: $(NAME)

# Comment créer l'exécutable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# Règle pour créer un fichier objet à partir d'un fichier source
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers intermédiaires
clean:
	rm -f $(OBJ)

# Règle pour nettoyer tout ce qui a été créé par le Makefile
fclean: clean
	rm -f $(NAME)

# Règle pour recompiler le projet
re: fclean all

# Empêcher les conflits de noms de fichiers et de règles
.PHONY: all clean fclean re
