/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:36:10 by hkilic            #+#    #+#             */
/*   Updated: 2021/12/11 15:53:50 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	mi;
	int	i;

	i = 0;
	mi = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[mi];
		tab[mi] = swap;
		i++;
		mi--;
	}
}
