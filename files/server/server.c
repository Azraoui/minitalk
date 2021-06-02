/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:29:04 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/02 20:57:36 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minitalk.h"

void	binary_0(int nb)
{
	write(1, "0\n", 1);
	// printf("nb == %d\n", nb);
}
void	binary_1(int nb)
{
	write(1, "1\n", 1);
	// printf("nb == %d\n", nb);
}

int main()
{
	struct sigaction sact;
	pid_t	pid;
	int		i;

	// sigemptyset(&sact.sa_mask);
	// sact.sa_flags = 1;
	// sact.__sigaction_u.__sa_handler = binary_1;
	// sigaction(SIGUSR2, &sact, NULL);
	// sigaction(SIGUSR1, &sact, NULL);
	pid = getpid();
	i = 0;
	signal(SIGUSR1, binary_0);
	signal(SIGUSR2, binary_1);
	printf("Server PID: %d\n", pid);
	while (1){}
	return (0);
}