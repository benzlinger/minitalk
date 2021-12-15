/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:34:04 by btenzlin          #+#    #+#             */
/*   Updated: 2021/12/15 13:58:43 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_message(int pid, char *msg)
{
	size_t	i;

	i = 0;
	while (msg[i])
	{
		if (msg[i] == '1')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(80);
	}
}

static char	*str_to_binary(char	*s, int bincount, int len)
{
	int		exp;
	int		count;
	char	*bin;

	exp = 7;
	count = 0;
	bin = malloc(len * 8 + 1);
	if (!bin)
		return (0);
	while (count < len)
	{
		while (exp >= 0)
		{
			if ((s[count] >> exp & 1) == 1)
				bin[bincount] = '1';
			else
				bin[bincount] = '0';
			bincount++;
			exp--;
		}
		exp = 7;
		count++;
	}
	bin[bincount] = '\0';
	return (bin);
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*bin;
	int		len;

	if (argc != 3)
	{
		ft_putstr_fd("Error: Number of arguments must be 3.\n", 1);
		return (-1);
	}
	pid = ft_atoi(argv[1]);
	len = ft_strlen(argv[2]);
	bin = str_to_binary(argv[2], 0, len);
	if (!bin)
	{
		ft_putstr_fd("Error: Memory allocation failed.\n", 1);
		return (-1);
	}
	else if (len == 0)
		ft_putstr_fd("Warning: String is empty.\n", 1);
	send_message(pid, bin);
	free(bin);
	return (0);
}
