/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:31:39 by hkilic            #+#    #+#             */
/*   Updated: 2021/12/06 14:07:00 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*saman;
	char	*igne;

	if (*to_find == '\0')
		return (str);
	saman = str;
	igne = to_find;
	while (1)
	{
		if (*igne == '\0')
			return ((char *)(saman - (igne - to_find)));
		if (*saman == *igne)
			igne++;
		else
			igne = to_find;
		if (*saman == '\0')
			break ;
		saman++;
	}
	return (0);
}
