/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:27:56 by hkilic            #+#    #+#             */
/*   Updated: 2021/12/01 20:55:30 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}