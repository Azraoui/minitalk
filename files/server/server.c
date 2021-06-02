/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:29:04 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/02 17:17:09 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"

void	talktome_0(int nb)
{
	write(1, "Hello World 0\n", 15);
	printf("nb == %d\n", nb);
}
void	talktome_1(int nb)
{
	write(1, "Hello World 1\n", 15);
	printf("nb == %d\n", nb);
}

int main()
{
	struct sigaction sact;
	pid_t	pid;
	int		i;

	sigemptyset(&sact.sa_mask);
	sact.sa_flags = 1;
	sact.__sigaction_u.__sa_handler = talktome_1;
	sigaction(SIGUSR2, &sact, NULL);
	// sigaction(SIGUSR1, &sact, NULL);
	pid = getpid();
	i = 0;
	// signal(SIGUSR1, talktome_0);
	// signal(SIGUSR2, talktome_1);
	printf("Server PID: %d\n", pid);
	while (1)
	{
		printf("i = %d\n", i++);
		sleep(2);
	}
	return (0);
}