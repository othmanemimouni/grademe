/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_second_order.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 21:14:18 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/13 21:14:23 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	remove(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
			{
				k = j;
				while (str[k])
				{
					str[k] = str[k + 1];
					k++;
				}
			}
			else
				j++;
		}
		i++;
	}
}

void	common(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str2[i])
	{
		j = 0;
		while (str1[j])
		{
			if (str2[i] == str1[j])
			{
				write(1, &str2[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	remove(av[2]);
	common(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
