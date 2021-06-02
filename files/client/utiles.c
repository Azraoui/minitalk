/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:27:27 by ael-azra          #+#    #+#             */
/*   Updated: 2021/06/02 18:42:16 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/minitalk.h"

int	chartobin(char c)
{
	int i;

	i = 7;
	while (i--)
	{
		if (c & (1 << i))
			return (31);
		else
			return (30);
	}
}

void	strtobin(int server_pid)
{
	
}