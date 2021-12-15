/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:34:22 by btenzlin          #+#    #+#             */
/*   Updated: 2021/12/15 12:17:37 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	*add_char_end(char *s, char c)
{
	char	*new_s;
	int		count;

	new_s = malloc(ft_strlen(s) + 2);
	if (!new_s)
		return (0);
	count = 0;
	while (s[count])
	{
		new_s[count] = s[count];
		count++;
	}
	new_s[count] = c;
	new_s[count + 1] = '\0';
	free (s);
	return (new_s);
}

static void	binary_to_string(char *s)
{
	int		exp;
	int		count;
	char	c;

	exp = 7;
	count = 0;
	c = 0;
	while (exp >= 0)
	{
		c += (s[count] - '0') << exp;
		count++;
		exp--;
	}
	write(1, &c, 1);
}

static void	sighandler(int	signum)
{
	static char	*bin;
	static int	count;

	count++;
	if (!bin)
	{
		bin = ft_strdup("");
		count = 0;
	}
	if (signum == SIGUSR1)
		bin = add_char_end(bin, '1');
	else
		bin = add_char_end(bin, '0');
	if (count == 7)
	{
		binary_to_string(bin);
		free(bin);
		bin = 0;
	}
}

int	main(void)
{
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		signal(SIGUSR1, sighandler);
		signal(SIGUSR2, sighandler);
		pause();
	}
	return (0);
}
