#include <unistd.h>

void	replace_last(char *str, char find, char replace)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (str[i])
	{
		if (str[i] == find)
			last = i;
		i++;
	}
	if (last != -1)
		str[last] = replace;
}

void	print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	replace_last(av[1], av[2][0], av[3][0]);
	print_string(av[1]);
	return (0);
}