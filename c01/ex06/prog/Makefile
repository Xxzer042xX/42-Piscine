# Nom de l'exécutable à créer
NAME = my_program

# Compilateur
CC = gcc

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Fichiers source
SRC = main.c fonction.c ft_strlen.c

# Fichiers objets
OBJ = $(SRC:.c=.o)

# Header files
HEADERS = ft_ultimate_div_mod.h

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
