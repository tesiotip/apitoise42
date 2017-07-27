/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:11:57 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 10:38:08 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		y;

	y = nb;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb >= 1)
	{
		while (nb > 1)
		{
			y = y * (nb - 1);
			nb--;
		}
		return (y);
	}
	else
		return (1);
}

int		main()
{
	/*int		nb;
	nb = 13; */
	printf("%d", ft_iterative_factorial(-1));
	printf("%d", ft_iterative_factorial(13));
	return (0);
}
