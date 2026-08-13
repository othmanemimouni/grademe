#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

int	main(int ac, char **av)
{
	int n;
	int i;

	if (ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	n = ft_atoi(av[1]);
	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}