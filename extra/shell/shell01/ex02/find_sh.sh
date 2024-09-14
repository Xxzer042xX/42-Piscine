#!/bin/bash

# Utilisation de find pour chercher les fichiers avec l'extension .sh
find . -type f -name "*.sh" | while read -r file; do
    # Utilisation de basename pour obtenir le nom de fichier sans le chemin et sans l'extension .sh
    basename "$file" .sh
done

