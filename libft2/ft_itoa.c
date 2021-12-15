/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:53:44 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/29 17:05:59 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_abs_val(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}

static	int	ft_digcnt(int n)
{
	int	count;
	int	temp;

	count = 0;
	temp = n;
	if (n == INT_MIN)
	{
		return (11);
	}
	if (temp < 0)
	{
		temp = temp * (-1);
		count++;
	}
	if (temp == 0)
	{
		count = 1;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = ft_digcnt(n);
	str = (char *)malloc(digits + 1);
	if (str == 0)
		return (0);
	str[digits--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
	}
	while (n != 0)
	{
		str[digits--] = ft_abs_val((n % 10)) + '0';
		n = n / 10;
	}
	return (str);
}
