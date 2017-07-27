/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:15:16 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/24 23:33:11 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*str;
	int		i;
	int		taille;

	i = 0;
	taille = max - min;
	if (min >= max)
	{
		str = NULL;
		return (0);
	}
	str = (int*)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	str[i] = 0;
	*range = str;
	return (taille);
}
