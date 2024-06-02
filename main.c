#include <unistd.h>

int solve(int tab[4][4], int input[16], int position)
{
    int size;

    if (pos == 16)
        return (1);
    size = 0;
    while (++size <= 4)
    {
        if (check_for_sure(tab, position, size) == 0)
        {
            tab[pos / 4][pos % 4] = size;
            if (check_case(tab, position, input) == 0)
            {
                if (solve(tab, input, position + 1) == 1)
                    return (1);
            }
            else
                tab[pos / 4][pos % 4] = 0;
        }
    }
    return (0);
}

void display_solution(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int main(int ac, char **av)
{
    int tab[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    int *input;

    if(check(ac, av) == 1)
        return (0);
    input = char_to_numbers(av[1]);
    if (solve(tab, entry, 0) == 1)
        display_solution(tap);
}