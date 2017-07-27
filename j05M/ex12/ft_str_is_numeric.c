/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:15:13 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 13:44:49 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			if (str[i] == '\0')
				return (1);
		}
		else
			return (0);
	}
	return (1);
}

int		main(void)
{
	char	str[] = "01234567f89";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
