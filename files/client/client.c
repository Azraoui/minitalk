/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:57:12 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/04 21:15:40 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minitalk.h"

int	main(int ac, char **av)
{
	pid_t	client_pid;
	pid_t	server_pid;
	char	*client_msg;
	char	*str_pid;
	int		i;

	if (ac > 2)
	{
		i = 2;
		// client_pid = getpid();
		// str_pid = ft_itoa(client_pid);
		server_pid = ft_atoi(av[1]);
		while (i < ac)
		{
			strtobin(server_pid, av[i++]);
			strtobin(server_pid, " \0");
		}
		strtobin(server_pid, "\n\0");
	}
	else
	{
		ft_putstr_fd("The client will take as parameters:\n", 1);
		ft_putstr_fd("	-The Server PID.\n", 1);
		ft_putstr_fd("	-The Message to the server.\n", 1);
	}
	return (0);
}
