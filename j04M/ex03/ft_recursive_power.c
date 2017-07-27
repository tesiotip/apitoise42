/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:25:43 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/13 16:44:01 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (0);
}

int		main(void)
{
	int		nb;
	int		power;

	nb = 35;
	power = 244;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
