/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:28:56 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/26 18:03:14 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 0 || nb == 1 || nb == 2)
	{
		printf("2");
		return (2);
	}
	while (i < nb)
	{
		while (nb % i == 0)
		{
			nb++;
		}
		i++;
	}
	printf("%d", nb);
	return (nb);
}

int		main()
{
	int		nb;

	nb = 68;
	ft_find_next_prime(nb);
	return (0);
}
