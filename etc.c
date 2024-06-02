#include <stdlib.h>

int check(int ac, char **av)
{
    if (ac != 2)
        return (1);
    if (ft_strlen(av[1]) != 31)
        return (1);
    return (0);
}

int *char_to_numbers(char *str)
{
    int i;
    int j;
    int *tab;

    if (!(tab = malloc(sizeof(int) * 16)))
        return (0);
    i = -1;
    j = 0;
    while (str[++i] != '\0')
        if (str[i] >= '1' && str[i] <= '4')
            tab[j++] = ft_atoi(str + i);
    return (tab);
}