/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:29:04 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/04 21:16:23 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minitalk.h"

int		ft_convert(char *str)
{
	int	dec;
	int	num;
	int	base;
	int	temp;
	int	last_digit;

	dec = 0;
	base = 1;
	temp = ft_atoi(str);
	while (temp)
	{
		last_digit = temp % 10;
		temp /= 10;
		dec += last_digit * base;
		base *= 2;
	}
	return (dec);
}

void	bintoint(int nb)
{
	static char *str;
	if (str == NULL)
		str = ft_strdup("");
	if (str && nb == SIGUSR1)
		str = ft_strjoin(str, "0\0");
	else if (str && nb == SIGUSR2)
		str = ft_strjoin(str, "1\0");
	if (str && ft_strlen(str) == 8)
	{
		ft_putchar_fd(ft_convert(str), 1);
		free(str);
		str = NULL;
	}
}

int main()
{
	pid_t	pid;

	pid = getpid();
	signal(SIGUSR1, bintoint);
	signal(SIGUSR2, bintoint);
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	while (1)
		pause();
	return (0);
}
