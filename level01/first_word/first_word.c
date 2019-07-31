/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:42:41 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/18 11:20:05 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(int i)
{
	if (i == '\t' || i == '\n' || i == '\v'
			|| i == '\f' || i == '\r' || i == ' ')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (ft_isspace(av[1][i]))
			i++;
		if (av[1][i + 1] == '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		while (av[1][i] && !(ft_isspace(av[1][i])))
		{
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
