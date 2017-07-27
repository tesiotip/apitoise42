/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:15:16 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/20 17:21:17 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *s, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	ft_strlen(char *str)
{
	int		b;

	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	return (b);
}

char	*ft_strdup(char *src)
{
	char	*s;

	if (!(s = (char*)malloc(sizeof(ft_strlen(src)) + 1)) || !src)
		return (0);
	ft_strcpy(s, src);
	return (s);
}
