/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:07:52 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/13 12:27:30 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int b;

	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	return (b);
}
