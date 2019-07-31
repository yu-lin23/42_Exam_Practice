/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 08:23:39 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/22 14:38:31 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n/10);
    ft_putchar(n % 10 + 48);
}

int     ft_atoi(char *s)
{
    int i;

    i = 0;
    while (*s >= '0' && *s <= '9')
        i = (i * 10) + *s++ - 48;
        return (i);
}

int is_prime(int n)
{
    int i;
    i = 2;
    while (i < n)
    {
        if (!(n % i))
            return (0);
        i++;
    }
    //ft_putnbr(i);
    return (1);
}

void    add_prime_sum(int n)
{
    int i;
    int sum;

    i = 2;
    sum = 0;
    if (n == 1)
        sum = 1;
    while (i <= n)
        {
            if (is_prime(i))
            {
                sum += i;
                //write(1, " = ", 3);
                //ft_putnbr(sum);
                //write(1, "\n", 1);
            }
            i++;
        }
    ft_putnbr(sum);
}

/*int     main(int ac, char **av)
{
    if (ac == 2 && ft_atoi(av[1]) > 0)
        add_prime_sum(ft_atoi(av[1]));
        else
            write(1, "0", 1);
        write(1, "\n", 1);
}*/