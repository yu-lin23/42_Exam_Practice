/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 21:59:28 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/31 22:03:33 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;
    unsigned char bit;

    i = 8;
    while (i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}

int main()
{
    print_bits(2);
    return (0);
}