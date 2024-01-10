/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:57:34 by deryacar          #+#    #+#             */
/*   Updated: 2023/10/04 17:52:03 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static	void	received_signal(int sig)
{
	if (sig == SIGUSR1)
		write(1, "Signal Received\n", 16);
}

void	ft_sendbit(int pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (c >> bit & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		write(1, "Girilen argumanları kontrol edin!", 35);
		write(1, "(client, pid, string)\n", 22);
		return (1);
	}
	signal(SIGUSR1, received_signal);
	pid = ft_atoi(argv[1]);
	while (*argv[2])
		ft_sendbit(pid, *(argv[2]++));
	ft_sendbit(pid, '\n');
	ft_sendbit(pid, '\0');
	usleep(100);
	return (0);
}
