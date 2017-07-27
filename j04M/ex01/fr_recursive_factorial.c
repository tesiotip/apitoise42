/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 13:58:18 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/14 10:14:38 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (1);
}

int		main()
{
	int nb;

	nb = 9;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
