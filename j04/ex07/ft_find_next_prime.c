/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:28:56 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/26 18:12:39 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 0 || nb == 1 || nb == 2)
	{
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
	return (nb);
}
