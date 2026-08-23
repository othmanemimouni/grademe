#include <unistd.h>

int	show_bits(unsigned char byte)
{
	int				i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (byte >> i) & 1;
		if (bit == 1)
        {
            write(1, "1", 1);
        }
		else
        {
            write(1, "0", 1);
        }
		i--;
	}
	return (0);
}