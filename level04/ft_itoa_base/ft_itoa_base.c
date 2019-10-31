/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:19:22 by yu-lin            #+#    #+#             */
/*   Updated: 2019/10/31 15:56:25 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char *base_str = "1234567890ABCDEF";
	char *str;
	long num;
	int num_len;

	num = value;
	len = 0;
	if (value == 0)
		return ("0"); //why not return str[0]=48?
	while (num)
	{
		len++;
		num /= base;
	}
	num = value;
	if (value < 0)
	{
		if (base == 10)
			len++;
		num *= -1;
	}
	str = (char*)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	while (num)
	{
		len--;
		str[len] = base_str[num % base];
		num /= base;
	}
	if (value < 0 && base == 10)
		str[0] = '-';
	return (str);
}
