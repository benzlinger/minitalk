/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:16:35 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/30 10:25:27 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	count;

	d = (char *)dest;
	s = (char *)src;
	count = 0;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (count < size)
		{
			d[count] = s[count];
			count++;
		}
	}
	else
	{
		while (size--)
		{
			d[size] = s[size];
		}
	}
	return (d);
}
