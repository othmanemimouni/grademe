#include <unistd.h>
/*
int	main(int ac, char **av)
{
	int i;
	int j;
	i = 0;
	j = ac - 1;

	if(ac >= 2)
	{
		while(av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else if (ac > 1)
	{
		write(1, &av[j][i], 1);
		j++;
	}
	
	return 0;
}
*/
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	while (i >= 1)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}