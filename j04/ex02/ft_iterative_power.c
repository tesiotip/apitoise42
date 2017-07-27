/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:50:21 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/13 16:18:23 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
