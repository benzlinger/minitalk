/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:26:40 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/29 16:45:55 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	size;
	size_t	count;

	size = ft_strlen(str);
	count = 0;
	cpy = (char *)malloc(sizeof(char) * (size + 1));
	if (cpy == 0)
	{
		return (0);
	}
	while (count < size)
	{
		cpy[count] = str[count];
		count++;
	}
	cpy[count] = '\0';
	return (cpy);
}
