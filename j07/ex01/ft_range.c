/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:15:16 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/24 18:39:09 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int*)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
