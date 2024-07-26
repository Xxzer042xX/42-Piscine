# Compilateur à utiliser
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror

# Répertoire d'inclusion des fichiers d'en-tête
INCLUDES = -I./include

# Répertoire où se trouvent les fichiers source (.c)
SRCDIR = ./src

# Liste des fichiers source (.c) dans le répertoire SRCDIR
SOURCES = $(wildcard $(SRCDIR)/*.c)

# Nom de l'exécutable cible à générer
TARGET = rush-01

# Règle par défaut pour générer l'exécutable cible
$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@
	# $(CC) : Commande de compilation avec le compilateur $(CC)
	# $(CFLAGS) : Options de compilation pour activer les avertissements et les erreurs
	# $(INCLUDES) : Options d'inclusion pour spécifier le répertoire des fichiers d'en-tête
	# $^ : Toutes les dépendances (fichiers source)
	# -o $@ : Option pour spécifier le nom de l'exécutable cible ($@ représente rush-01)

# Règle pour nettoyer les fichiers générés
clean:
	rm -f $(TARGET)
