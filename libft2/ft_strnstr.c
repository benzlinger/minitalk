/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:57:21 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/15 11:17:05 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t size)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*sub1;

	j = 0;
	str1 = (char *)str;
	sub1 = (char *)substr;
	if (sub1[0] == '\0')
		return (str1);
	while (j < size && str1[j] != '\0')
	{
		i = 0;
		while (j < size && str1[j] != '\0'
			&& sub1[i] != '\0' && sub1[i] == str1[j])
		{
			i++;
			j++;
		}
		if (sub1[i] == '\0')
			return (str1 + (j - i));
		j = j - i + 1;
	}
	return (0);
}
