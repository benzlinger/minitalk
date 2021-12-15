/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:21:43 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/15 15:30:59 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	ptr = malloc(n * size);
	if (ptr == 0)
	{
		return (0);
	}
	ft_bzero(ptr, n * size);
	return (ptr);
}
