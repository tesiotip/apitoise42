/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:28:52 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/17 17:46:03 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index >= 47)
		return (0);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
		return (0);
}

int		main(void)
{
	int		index;

	index = 46;
	printf("%d", ft_fibonacci(index));
	return (0);
}

