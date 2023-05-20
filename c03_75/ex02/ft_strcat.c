/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:01:51 by hkilic            #+#    #+#             */
/*   Updated: 2021/12/06 14:03:47 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_say(char *str)
{
	int	sayac;

	sayac = 0;
	while (*str != '\0')
	{
		sayac++;
		str++;
	}
	return (sayac);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_say(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}
