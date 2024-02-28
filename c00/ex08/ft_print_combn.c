#include <unistd.h>

void    ft_put_str(char *str, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        write(1, &str[i], 1);
        i++;
    }
    if (str[0] != '9' - n + 1)
        write(1, ", ", 2);
}

//gener comb
void    i_love_recursive(char *str, int n, int pos)
{
    //condtion de sortie
    if (pos == n)
    {
        ft_put_str(str, n);
        return;
    }
    //condition pos 0
    if (pos == 0)
        str[pos] = '0';
    //logique de comparaison pos - 1 a pos  pour avoir pos 3
    else
        str[pos] = str[pos - 1] + 1;
    //depart fonction recursive
    while (str[pos] <= '9') {
        i_love_recursive(str, n, pos + 1);
        str[pos]++;
    }
}

void    ft_print_combn(int n)
{
    char str[10];

    if (n > 0 && n < 10)
        i_love_recursive(str, n, 0);
}

int main(int ac, char **av)
{
    int numbers;

    if (ac == 2)
    {
        numbers = av[1][0] - 48;
        ft_print_combn(numbers);
    }
    return(0);    
}