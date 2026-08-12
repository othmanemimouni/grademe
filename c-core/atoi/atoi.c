int	white_spaces(const char *str)
{
	int	i;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
    return (i);
}

int	checker(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
    return (sign);
}

int	atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;

	i = white_spaces(str);

	sign = checker(str, &i);

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
