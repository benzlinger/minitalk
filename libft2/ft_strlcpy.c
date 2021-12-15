/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:42:58 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/27 15:54:42 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	srclen;

	if (!dest || !src)
		return (0);
	count = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while ((size - 1) > 0 && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
		size--;
	}
	if (count < ft_strlen(dest))
	{
		dest[count] = '\0';
	}
	return (srclen);
}
