/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:58:38 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 21:43:19 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new;

	new = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			new = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && new == 1)
		{
			str[i] -= 32;
			new = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && new == 0)
			str[i] += 32;
		else
			new = 0;
		i++;
	}
	return (str);
}

int		main()
{
	char	str[] = "salut, ;comMent   \ntu --vas ? 42mots ,quarante-deux; cinquante+++++et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
