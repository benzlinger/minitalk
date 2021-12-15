/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:24:51 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/01 11:16:41 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t size)
{
	char	*str2;

	str2 = str;
	while (size > 0)
	{
		*str2 = a;
		size--;
		str2++;
	}
	return (str);
}
