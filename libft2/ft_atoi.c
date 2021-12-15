/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:46:41 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/14 15:01:56 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	isnegative;
	int	result;

	count = 0;
	result = 0;
	isnegative = 1;
	while (str[count] == '\n' || str[count] == '\v' || str[count] == '\t'
		|| str[count] == '\r' || str[count] == '\f' || str[count] == ' ')
	{
		count++;
	}
	if (str[count] == '-')
	{
		count++;
		isnegative = -1;
	}	
	else if (str[count] == '+')
		count++;
	while (str[count] != '\0' && ft_isdigit(str[count]))
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * isnegative);
}
