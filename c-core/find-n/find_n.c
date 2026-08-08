#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	i = 0;
	
	if(ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
	}
	else if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] == 'n')
			{
				write(1, "n", 1);
				write(1, "\n", 1);
				return 0;
			}
			i++;
		}
		write(1, "\n", 1);
		
	}
}
