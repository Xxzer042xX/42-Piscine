# Rush 00 - Piscine C

## Description

Ce projet consiste à créer un programme en C qui affiche un rectangle de dimensions données. Le projet est composé de trois fichiers principaux :
- `main.c`
- `ft_putchar.c`
- `rush0X.c` (où X est le numéro du rush)

## Structure des fichiers

- `main.c` : contient la fonction `main` qui appelle la fonction `rush` avec des paramètres prédéfinis.
- `ft_putchar.c` : contient la fonction `ft_putchar` qui permet d'afficher un caractère sur la sortie standard.
- `rush0X.c` : contient la fonction `rush` qui génère le rectangle.

## Compilation

Pour compiler le programme, utilisez la commande suivante :
```
cc -Wall -Wextra -Werror main.c ft_putchar.c rush0X.c -o rush00
```

## Utilisation

Une fois le programme compilé, vous pouvez l'exécuter avec la commande suivante :
```
./rush00
```

Par défaut, le programme affichera un rectangle de 5 caractères de largeur et 5 caractères de hauteur. Pour tester d'autres dimensions, modifiez les paramètres passés à la fonction `rush` dans `main.c`.

## Exemples

Voici quelques exemples d'utilisation du programme :

### Exemple 1 : rush(5, 3)
```
int main()
{
    rush(5, 3);
    return (0);
}
```
Résultat :
```
$> ./rush00
o---o
|   |
o---o
$>
```

### Exemple 2 : rush(5, 1)
```
int main()
{
    rush(5, 1);
    return (0);
}
```
Résultat :
```
$> ./rush00
o---o
$>
```

### Exemple 3 : rush(1, 1)
```
int main()
{
    rush(1, 1);
    return (0);
}
```
Résultat :
```
$> ./rush00
o
$>
```

### Exemple 4 : rush(1, 5)
```
int main()
{
    rush(1, 5);
    return (0);
}
```
Résultat :
```
$> ./rush00
o
|
|
|
o
$>
```

## Notes

- Assurez-vous que votre code respecte la norme de codage de 42. La moulinette utilisera `norminette` avec le flag `-R CheckForbiddenSourceHeader` pour vérifier la conformité de vos fichiers.
- En cas de problème de compilation, vous obtiendrez un score de 0, donc vérifiez bien votre code avant de le soumettre.

## Contribution

- Chaque membre du groupe doit être capable d'expliquer le code lors de la soutenance.
- Prenez contact avec vos binômes par tous les moyens nécessaires pour vous assurer que tout le monde est au courant de l'avancement du projet.
