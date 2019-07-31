/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 06:42:42 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/18 08:35:25 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;

	if (ac != 2)
		ft_putchar('a');
	else
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				ft_putchar('a');
				break;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
