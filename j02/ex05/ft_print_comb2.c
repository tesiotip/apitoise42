/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 09:32:13 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/07 14:22:04 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_comb2_putchar(int a, int b)
{
	if (a < b && a <= 98)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		if (a != 98 || b != 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			ft_comb2_putchar(a, b);
			b++;
		}
		a++;
		b = 0;
	}
}
