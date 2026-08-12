#include <stdlib.h>

void	strprint(char *dup, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
}

char	*strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	strprint(dup, src);
	return (dup);
}
