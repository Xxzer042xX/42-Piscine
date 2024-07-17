# Rush 01 - Piscine C

## Description

Ce projet consiste à créer un programme en C qui résout un puzzle de placement de caisses sur une grille de 4x4. Chaque caisse a une hauteur unique allant de 1 à 4, et le placement doit être fait de manière à ce que chaque ligne et chaque colonne respectent les vues données.

## Structure des fichiers

- `Makefile` : fichier pour automatiser la compilation du projet.
- `README.md` : ce fichier, contenant les informations sur le projet.
- `include/` : dossier contenant les fichiers d'en-tête (.h).
  - `solver.h` : contient les déclarations des fonctions de `solver.c` et `utils.c`.
- `src/` : dossier contenant les fichiers sources (.c).
  - `main.c` : contient la fonction `main` qui gère l'entrée utilisateur et appelle la fonction de résolution du puzzle.
  - `solver.c` : contient les fonctions de résolution du puzzle.
  - `utils.c` : contient des fonctions utilitaires comme l'affichage de la grille et la vérification des règles.

## Compilation

Pour compiler le programme, utilisez la commande suivante dans le répertoire racine du projet :
```
make
```

Cette commande utilisera le `Makefile` pour compiler le projet et générer l'exécutable `rush-01`.

## Utilisation

Le programme est exécuté avec les arguments représentant les vues pour chaque colonne et chaque ligne. Les arguments doivent être donnés dans l'ordre suivant : `col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right`.

Exemple d'exécution :
```
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

## Exemples

### Exemple 1
Commande :
```
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```
Résultat :
```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

### Exemple 2
Commande :
```
./rush-01 "1 2 2 2 3 2 1 2 2 1 3 2 2 2 2 1"
```
Résultat :
```
2 1 3 4
3 4 1 2
4 2 2 3
1 3 4 2
```

## Gestion des erreurs

En cas d'erreur dans les arguments ou d'impossibilité de résoudre le puzzle, le programme affichera "Error" suivi d'un retour à la ligne.

### Exemple d'erreur
Commande :
```
./rush-01 "4 3 2 5 1 2 2 2 4 3 2 1 1 2 2 2"
```
Résultat :
```
Error
```

## Notes

- Assurez-vous que votre code respecte la norme de codage de 42. La moulinette utilisera `norminette` pour vérifier la conformité de vos fichiers.
- En cas de problème de compilation, vous obtiendrez un score de 0, donc vérifiez bien votre code avant de le soumettre.

## Contribution

- Chaque membre du groupe doit être capable d'expliquer le code lors de la soutenance.
- Prenez contact avec vos binômes par tous les moyens nécessaires pour vous assurer que tout le monde est au courant de l'avancement du projet.
