#include <unistd.h>
#include <stdio.h>
#include "ft.h"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlen(char *str);

int main(void)
{
    char dest[13] = "Hello";
    char *src = " my World!";
    unsigned int size = sizeof(dest); // Taille du tampon 'dest'
    unsigned int ret;

    ret = ft_strlcat(dest, src, size);
    printf("Size: %u\n", size);
    write(1, dest, ft_strlen(dest)); // Affiche la chaîne concaténée
    printf("\nRetour: %u\n", ret); // Affiche la longueur totale de la chaîne qu'on a tenté de créer
    return (0);
}
