/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:15:13 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 13:39:32 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122))
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
	char	str[] = "ssssdfsMFlkasfjl";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
