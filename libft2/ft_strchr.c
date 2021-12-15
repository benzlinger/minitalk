/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:09:38 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/01 12:40:17 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	char	*str2;

	str2 = (char *)str;
	while (*str2 != a)
	{
		if (*str2 == '\0')
		{
			return (0);
		}
		else
		{
			str2++;
		}
	}
	return (str2);
}
