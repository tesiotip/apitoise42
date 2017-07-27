/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:28:56 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/26 16:54:48 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 2)
	{
		printf("1");
		return (1);
	}
	if (nb == 0 || nb == 1)
	{
		printf("0");
		return (0);
	}
	while (i < nb)
	{
		while (nb % i == 0)
		{
			printf("0");
			return (0);
			i++;
		}
		if (nb % i != 0)
		{
			printf("1");
			return (1);
		}
	}
	return (0);
}

int		main()
{
	int		nb;

	nb = 2147483647;
	ft_is_prime(nb);
	return (0);
}
