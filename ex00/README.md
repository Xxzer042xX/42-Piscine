#rush01

Ce programme `rush01` génère et vérifie des grilles de sudoku de différentes tailles. Voici comment l'utiliser et quelques exemples d'entrées valides et non valides.

## Utilisation

Pour exécuter le programme `rush01`, utilisez la commande suivante :

```bash
./rush01 "sequence_de_chiffres"
```

- `sequence_de_chiffres` est une séquence de chiffres représentant les hauteurs visibles depuis les quatre côtés de la grille de sudoku, dans l'ordre suivant : vue de gauche à droite, vue de droite à gauche, vue d'en haut vers le bas, vue d'en bas vers le haut.

### Exemples d'entrées valides :

#### Grille 3x3 :

   ```bash
   ./rush "3 2 1 1 2 2 3 2 1 1 2 2"
   ```
#### Grille 4x4 :
1. **Entrée 1 :**
   ```bash
   ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
   ```


#### Grille 5x5 :
1. **Entrée 1 ok:**
   ```bash
 % ./rush01 "4 1 2 2 2 1 5 2 2 3 2 3 2 2 1 4 2 1 2 3"
   ```

#### Grille 6x6 :
1. **Entrée 1 :**
   ```bash
 % ./rush01 "1 2 2 3 2 4 3 4 2 2 1 2 1 3 2 3 2 3 3 3 2 3 1 2"
   ```


### Exemples d'entrées non valides :

1. **Grille 4x4 :**
   - **Moins de 16 chiffres :**
     ```bash
     ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2"
     ```

   - **Caractères non numériques :**
     ```bash
     ./rush01 "4 3 2 1 1 2 A 2 4 3 2 1 1 2 2 2"
     ```

   - **Plus de 16 chiffres :**
     ```bash
     ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 4"
     ```

2. **Grille 5x5 :**
   - **Moins de 25 chiffres :**
     ```bash
     ./rush01 "5 1 4 3 2 4 3 1 2 5 2 3 1 4 5 3 1 2 4"
     ```

   - **Caractères non numériques :**
     ```bash
     ./rush01 "5 1 4 3 2 4 A 1 2 5 2 3 1 4 5 3 1 2 4 5"
     ```

   - **Plus de 25 chiffres :**
     ```bash
     ./rush01 "5 1 4 3 2 4 3 1 2 5 2 3 1 4 5 3 1 2 4 5 1 2 3 4 5"
     ```

3. **Grille 6x6 :**
   - **Moins de 36 chiffres :**
     ```bash
     ./rush01 "6 2 5 3 4 1 3 6 2 4 5 1 2 6 1 3 4 5 1 2 6 5 4 2 1 3 6 5 4 3 2 1"
     ```

   - **Caractères non numériques :**
     ```bash
     ./rush01 "6 2 5 3 4 1 3 6 2 4 5 1 2 6 1 3 A 5 1 2 6 5 4 2 1 3 6 5 4 3 2 1 4 5"
     ```

   - **Plus de 36 chiffres :**
     ```bash
     ./rush01 "6 2 5 3 4 1 3 6 2 4 5 1 2 6 1 3 4 5 1 2 6 5 4 2 1 3 6 5 4 3 2 1 4 5 6 2 3 4 5"
