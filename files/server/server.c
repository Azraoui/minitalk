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

	if (!str)
		str = ft_strdup("");
	if (nb == 30)
		str = ft_strjoin(str, "0\0");
	else if (nb == 31)
		str = ft_strjoin(str, "1\0");
	if (ft_strlen(str) == 8)
	{
		// printf("%s\n", str);
		ft_putchar_fd(ft_convert(str), 1);
		// ft_putchar_fd('\n', 1);
		// usleep(1);
		free(str);
		str = NULL;
	}
}

int main()
{
	// struct sigaction sact;
	pid_t	pid;
	
	// sigemptyset(&sact.sa_mask);
	// sact.sa_flags = 1;
	// sact.__sigaction_u.__sa_handler = binary_1;
	//sigaction(SIGUSR2, &sact, NULL);
	// sigaction(SIGUSR1, &sact, NULL);
	
	pid = getpid();
	signal(SIGUSR1, bintoint);
	signal(SIGUSR2, bintoint);
	printf("Server PID: %d\n", pid);
	while (1){
		pause();
	}
	return (0);
}
