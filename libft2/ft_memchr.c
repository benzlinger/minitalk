/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:32:09 by btenzlin          #+#    #+#             */
/*   Updated: 2021/09/14 15:16:18 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int a, size_t size)
{
	char	*str2;

	str2 = (char *)str;
	while (size > 0)
	{
		if (*str2 == a)
		{
			return (str2);
		}
		else
		{
			str2++;
			size--;
		}
	}
	return (0);
}
