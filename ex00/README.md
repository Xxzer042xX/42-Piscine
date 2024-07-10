# rush01

Ce programme `rush01` génère et vérifie des grilles de sudoku de différentes tailles. Voici comment l'utiliser et quelques exemples d'entrées valides et non valides.

## Utilisation

Pour exécuter le programme `rush01`, utilisez la commande suivante :

```bash
./rush-01 "sequence_de_chiffres"
```

- `sequence_de_chiffres` est une séquence de chiffres représentant les hauteurs visibles depuis les quatre côtés de la grille de sudoku, dans l'ordre suivant : vue de gauche à droite, vue de droite à gauche, vue d'en haut vers le bas, vue d'en bas vers le haut.

```bash
./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left
row3left row4left row1right row2right row3right row4right"
```

### Exemples d'entrées valides :

#### Grille 2x2

```bash
./rush-01 "1 2 2 1 1 2 2 1"
```

#### Grille 3x3

```bash

```

#### Grille 4x4

```bash
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

#### Grille 5x5

```bash
./rush-01 "2 1 4 3 2 2 3 1 2 4 2 3 4 1 3 2 1 2 4 3"
```


#### Grille 6x6

```bash
./rush-01 "6 5 4 3 2 1 1 2 3 4 5 6 6 5 4 3 2 1 1 2 3 4 5 6"
```
### Exemples d'entrées non valides :


