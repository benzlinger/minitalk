/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:33:49 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/30 10:19:51 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char		*str;
	const char	*str2;

	str = (char *)dest;
	str2 = (const char *)src;
	if (!str && !str2)
	{
		return (0);
	}
	while (size > 0)
	{
		*str = *str2;
		size--;
		str++;
		str2++;
	}
	return (dest);
}
