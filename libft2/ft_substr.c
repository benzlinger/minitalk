/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:28:50 by btenzlin          #+#    #+#             */
/*   Updated: 2021/09/16 12:09:36 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	count;

	if (!s || len < 0)
		return (0);
	size = ft_strlen(s);
	if (size < start || len == 0)
		return (ft_strdup(""));
	if (size < len)
		len = size;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	count = 0;
	while (count < len && s[start])
	{
		substr[count] = s[start];
		count++;
		start++;
	}
	substr[count] = '\0';
	return (substr);
}
