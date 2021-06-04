/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:27:27 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/04 20:03:15 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minitalk.h"

int	*chartobin(char c)
{
	int i;
	int	j;
	int	*arr;

	i = 7;
	arr = (int *)malloc(sizeof(int) * 8);
	j = 0;
	while (i >= 0 && j < 8)
	{
		if (c & (1 << i))
			arr[j] = 31; // 1
		else
			arr[j] = 30; // 0
		j++;
		i--;
	}
	return (arr);
}

void	strtobin(int server_pid, int client_pid, char *str)
{
	int	len;
	int	*arr;
	int	j;
	int	i;

	len = ft_strlen(str);
	i = 0;
	printf("len == %d\n", len);
	while (str[i] && i < len)
	{
		j = 0;
		arr = chartobin(str[i]);
		while (j < 8)
		{
			kill(server_pid, arr[j]);
			// printf("%d", arr[j]);
			usleep(10);
			j++;
		}
		usleep(1);
		free(arr);
		i++;
	}
}