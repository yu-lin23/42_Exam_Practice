/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:26:24 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/14 15:12:13 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
    int i;
    int j;
    char *first_wd;
    int first_len;

    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        i = 0;
        first_len = 0;
        while (av[1][i] != '\0')
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            else
                break;
        }
        while (av[1][i] != ' ' && av[1][i] != '\t')
        {
            first_len++;
            i++;
        }
        first_wd = (char*)malloc(sizeof(char) * first_len);
        first_wd[first_len] = '\0';
        i -= first_len;
        j = 0;
        while (j < first_len)
        {
            first_wd[j] = av[1][i];
            j++;
            i++;
        }
        while (av[1][i] != '\0')
        {
            if ((av[1][i] == ' ' || av[1][i] == '\t'))
                i++;
            else if ((av[1][i] != ' ' || av[1][i] != '\t'))
            {
                while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
        }
        j = 0;
        while (first_wd[j] != '\0')
        {
            write(1, &first_wd[j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
    return (0);
}