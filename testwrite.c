
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char **av)
{
    
    ft_putstr(av[1]);
    return (0);
}

