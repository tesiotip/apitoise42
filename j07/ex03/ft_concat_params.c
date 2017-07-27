/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 21:17:15 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/23 12:50:18 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = 0;
	while (len < argc)
	{
		while (argv[i])
		{
			len++;
			i++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 1;
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		if (i < argc - 1)
			str = ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
