/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:47:33 by hkilic            #+#    #+#             */
/*   Updated: 2021/11/27 23:04:46 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hk(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

		i = 0;
		j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			hk((i / 10) + '0');
			hk((i % 10) + '0');
			write(1, " ", 1);
			hk((j / 10) + '0');
			hk((j % 10) + '0');
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
