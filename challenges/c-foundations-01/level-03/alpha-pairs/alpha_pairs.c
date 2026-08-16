#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c - 'a') % 2 == 0)
		{
			write(1, &c, 1);
			write(1, &c, 1);
		}
		else
		{
			char	upper;

			upper = c - 32;
			write(1, &upper, 1);
			write(1, &upper, 1);
		}
		c++;
	}
	write(1, "\n", 1);
	return (0);
}