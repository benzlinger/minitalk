/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:15:58 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/20 12:58:13 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_end_size(size_t size, size_t d_size, size_t s_size)
{
	size_t	end_size;

	end_size = 0;
	if (size < d_size)
	{
		end_size = size + s_size;
	}
	else
	{
		end_size = d_size + s_size;
	}
	return (end_size);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_size;
	size_t	s_size;
	size_t	end_size;
	size_t	count;

	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	count = 0;
	if (size == 0)
	{
		return (s_size);
	}
	end_size = get_end_size(size, d_size, s_size);
	while (d_size < (size - 1) && src[count] != '\0')
	{
		dest[d_size] = src[count];
		d_size++;
		count++;
	}
	if (d_size < size)
	{
		dest[d_size] = '\0';
	}
	return (end_size);
}
