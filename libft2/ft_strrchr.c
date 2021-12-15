/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:04:24 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/01 12:41:30 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char	*str2;

	str2 = (char *)str;
	if (ft_strchr(str2, a) == 0)
	{
		return (0);
	}
	while (ft_strchr(str2, a) != 0)
	{
		if (*str2 != '\0')
		{
			str2++;
		}
		else
		{
			return (str2);
		}
	}
	str2--;
	return (str2);
}
