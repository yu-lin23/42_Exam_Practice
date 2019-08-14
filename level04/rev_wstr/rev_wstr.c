/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:14:34 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/14 10:54:52 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_wstr(int start, int wordlen, char *str)
{
	int i;

	i = 0;
	while (i <= wordlen)
	{
		if (str[start] == '\0')
			break;
		write(1, &str[start], 1);
		start++;
		i++;
	}
}

int		ft_wordcount(char *str)
{
	int i;
	int wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			wordcount++;
		i++;
		if (str[i] == '\0')
			wordcount++;
	}
	return (wordcount);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		int nbr_of_words;
		int rev;
		int wordlen;
		int i;
        int first_word;

		rev = ft_strlen(av[1]);
		nbr_of_words = ft_wordcount(av[1]);
		i = 0;
		while (i < nbr_of_words)
		{
			wordlen = 0;
			while (av[1][rev] != ' ' && av[1][rev] != '\t' && rev != 0)
			{
				wordlen++;
				rev--;
			}
            if (rev == 0)
            {
                first_word = 0;
                while (av[1][first_word] != ' ' && av[1][first_word] != '\t')
                {
                    write(1, &av[1][first_word], 1);
                    first_word++;
                }
                write(1, "\n", 1);
                break;
			}
            if (av[1][rev] == ' ' || av[1][rev] == '\t')
			{
				ft_rev_wstr(rev + 1, wordlen, av[1]);
				write(1, &av[1][rev], 1);
            }
            rev--;
			i++;
		}
		return (0);
	}
}