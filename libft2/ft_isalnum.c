/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:02:35 by btenzlin          #+#    #+#             */
/*   Updated: 2021/07/01 13:22:46 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isalpha(a))
	{
		return (1);
	}
	else if (ft_isdigit(a))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
