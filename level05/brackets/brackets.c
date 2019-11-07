/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 10:52:00 by exam              #+#    #+#             */
/*   Updated: 2019/11/01 11:08:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		bracket_cmp(char a, char b)
{
	if (a == '(' && b == ')')
		return (1);
	else if (a == '[' && b == ']')
		return (1);
	else if (a == '{' && b == '}')
		return (1);
	else
		return (0);
}

int		brackets(char *str)
{
	int i;
	int stack[4096];

	i = -1;
	while (*str)
	{
		if (*str == '('|| *str == '[' || *str == '{')
			stack[++i] = *str;
		else if (*str == ')'|| *str == ']' || *str == '}')
			if (!bracket_cmp(stack[i--], *str))
				return (0);
		str++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (++i < ac)
		{
			if (brackets(av[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
	}
	return (0);
}
