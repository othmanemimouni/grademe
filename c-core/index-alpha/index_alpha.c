#include <unistd.h>

void	print_char(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}
int	main(int ac, char **av)
{
	int	i;
	int	n;

	if (ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
			n = av[1][i] - 'a';
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			n = av[1][i] - 'A';
		else
			n = 1;
		print_char(av[1][i], n);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
