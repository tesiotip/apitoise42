/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:36:06 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 20:13:27 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if(to_find[0] == '\0')
		return (0);
	while(str[i] != '\0')
	{
		j = 0;
		if(str[i] == to_find[0])
		{
			while(str[i + j] == to_find[j])
			{
				j++;
				if(to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int		main()
{
	printf("%s\n", ft_strstr("Moleenbeek", "eenb"));
	printf("%s", strstr("Moleenbeek", "eenb"));
	return (0);
}
