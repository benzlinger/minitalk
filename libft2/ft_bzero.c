/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:21:26 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/01 11:16:33 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	char	*str2;
	int		count;

	str2 = str;
	count = 0;
	while (size > 0)
	{
		str2[count] = '\0';
		size--;
		count++;
	}
	str = str2;
}
