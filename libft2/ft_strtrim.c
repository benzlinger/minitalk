/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:33:21 by btenzlin          #+#    #+#             */
/*   Updated: 2021/09/14 11:48:36 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size]))
	{
		size--;
	}
	str = ft_substr(s1, 0, size + 1);
	if (!str)
		return (0);
	return (str);
}
