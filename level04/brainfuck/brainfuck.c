/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 08:24:12 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/21 11:01:39 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int loop;
	char *pointer;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		if (!(pointer = (char*)malloc(sizeof(char) * 2049)))
			return (-1);
		while ( i <= 2048)
			pointer[i++] = '\0';
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == '>')
				pointer++;
			else if (av[1][i] == '<')
				pointer--;
			else if (av[1][i] == '+')
				*pointer += 1;
			else if (av[1][i] == '-')
				*pointer -= 1;
			else if (av[1][i] == '.')
				write(1, &*pointer, 1);
			else if (av[1][i] == '[' && *pointer == 0)
			{
				loop = 1;
				while (loop != 0)
				{
					i++;
					if (av[1][i] == '[')
						loop++;
					if (av[1][i] == ']')
						loop--;
				}
			}
			else if (av[1][i] == ']' && *pointer)
			{
				loop = 1;
				while (loop)
				{
					i--;
					if (av[1][i] == '[')
						loop--;
					if(av[1][i] == ']')
						loop++;
				}
			}
			i++;
		}
	}
	return (0);
}
