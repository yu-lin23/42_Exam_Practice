/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:22:25 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/22 15:40:39 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int		main(void)
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			write(1, "fizzbuzz", 9);
		else if ((i % 3) == 0)
			write(1, "fizz", 5);
		else if ((i % 5) == 0)
			write(1, "buzz", 5);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
