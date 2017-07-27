/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:37:44 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/27 12:41:06 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strcpy(char *s, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char				ft_strlen(char *str)
{
	int		b;

	b = 0;
	while (str[b])
	{
		b++;
	}
	return (b);
}

char				*ft_strdup(char *src)
{
	char	*s;

	if (!(s = (char*)malloc(sizeof(ft_strlen(src)) + 1)) || !src)
		return (0);
	ft_strcpy(s, src);
	return (s);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *mast;
	int			i;

	i = 0;
	mast = malloc(sizeof(*mast) * ac + 1);
	mast[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		mast[i].size_param = ft_strlen(av[i]);
		mast[i].str = av[i];
		mast[i].copy = ft_strdup(av[i]);
		mast[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (mast);
}
