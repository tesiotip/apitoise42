/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:13:36 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/12 10:31:50 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_sort_integer_table(int *tab, int size)
{
	int		swap;

	size = 0;
	while (tab[size] != '\0')
	{
		if (tab[size] < tab[size + 1])
		{
			ft_putchar(tab[size]);
			size++;
		}
		if (tab[size] > tab[size + 1])
		{
			ft_putchar(tab[size]);
			swap = size;
			size = *tab;
			*tab = swap;
			size = 0;
		}
	}
}
