/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 08:02:28 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/08 09:19:18 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int i)
{
    if (i >= 10)
        ft_putnbr(i / 10);
    i = (i % 10) + 48;
    write(1, &i, 1);
}

int ft_atoi(char *str)
{
    int nbr;
    int check;

    nbr = 0;
    check = 1;
    while ((*str == '\t') || (*str == '\n') || (*str == '\v') || (*str == '\f') || (*str == '\r' || (*str == ' ')))
        str++;
    if (*str == 0)
        return (0);
    if (*str == '+' || *str == '-')
        {
            if (*str == '-')
                check = -1;
            str++;
        }
    while (*str >= '0' && *str <= '9')
    {
        nbr = (nbr * 10) + (*str - 48) * check;
        str++;
    }
    return (nbr);
}

int main(int ac, char **av)
{
    int nbr;
    int times;
    int mult;
    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        nbr = ft_atoi(av[1]);
        times = 1;
        while (times < 10)
        {
            mult = times * nbr;
            ft_putnbr(times);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(mult);
            write(1, "\n", 1);
            times++;
        }
    }
    return (0);
}