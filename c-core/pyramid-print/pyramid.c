#include <stdlib.h>
#include <unistd.h>

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
void	print_spaces(int n)
{
	while (n > 0)
	{
		write(1, " ", 1);
		n--;
	}
}

void	print_hashes(int n)
{
	while (n > 0)
	{
		write(1, "#", 1);
		n--;
	}
}

void	print_pyramid(int height)
{
	int	row;

	row = 1;
	while (row <= height)
	{
		print_spaces(height - row);
		print_hashes(2 * row - 1);
		write(1, "\n", 1);
		row++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	print_pyramid(atoi(av[1]));
	return (0);
}