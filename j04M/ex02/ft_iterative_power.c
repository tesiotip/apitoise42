/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:50:21 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/17 17:41:20 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{

	int		value;

	value = nb;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (power > 1)
		{
			nb = nb * value;
			power--;
		}
		return (nb);
	}
	else
		return (0);
}

int		main()
{
	/*int		nb;
	int		power;

	nb = 5;
	power = 0; */
	printf("%d", ft_iterative_power(0, 0));
	printf("%d", ft_iterative_power(0, 1));
	printf("%d", ft_iterative_power(1, 0));
	printf("%d", ft_iterative_power(-2, 0));
	printf("%d", ft_iterative_power(1, 4));
	printf("%d", ft_iterative_power(2, 32));
	return (0);
}
