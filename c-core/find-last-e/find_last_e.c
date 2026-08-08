#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	found;

	if (argc != 2)
	{
		write(1, "e\n", 2);
		return (0);
	}
	i = 0;
	found = -1;
	while (argv[1][i])
	{
		if (argv[1][i] == 'e')
			found = i;
		i++;
	}
	if (found != -1)
		write(1, &argv[1][found], 1);
	write(1, "\n", 1);
	return (0);
}