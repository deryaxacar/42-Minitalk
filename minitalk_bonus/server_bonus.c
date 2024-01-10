/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:57:56 by deryacar          #+#    #+#             */
/*   Updated: 2023/10/04 18:03:43 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handle(int sig, siginfo_t *info, void *context)
{
	static int	bit = 128;
	static int	c = 0;

	(void)context;
	if (sig == SIGUSR1)
		c = c + bit;
	bit = bit / 2;
	if (bit == 0)
	{
		write(1, &c, 1);
		if (c == '\0')
			kill(info->si_pid, SIGUSR1);
		bit = 128;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	act;

	write(1, "PID:", 4);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	act.sa_sigaction = ft_handle;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
}
