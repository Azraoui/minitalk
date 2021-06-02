/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:57:12 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/02 20:10:27 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"

int main(int ac, char **av)
{
	pid_t	client_pid;
	pid_t	server_pid;
	char	*client_msg;
	char	*str_pid;

	if (ac > 2)
	{
		client_pid = getpid();
		str_pid = ft_itoa(client_pid);
		server_pid = ft_atoi(av[1]);
		strtobin(server_pid, client_pid, str_pid);
	}
	return (0);
}