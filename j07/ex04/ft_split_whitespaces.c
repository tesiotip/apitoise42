/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:15:01 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/24 05:50:57 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		spaces(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\0');
}

int		count(char *str)
{
	int		i;
	int		new;

	i = 0;
	new = 0;
	if (spaces(str[i]) == 0)
		new++;
	while (str[i])
	{
		if (spaces(str[i]) && spaces(str[i + 1]) == 0)
			new++;
		i++;
	}
	return (new);
}

char	*create(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (spaces(str[i]) == 0)
		i++;
	word = (char*)malloc(sizeof(*word) * i + 1);
	i = 0;
	while (spaces(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**tab;

	j = count(str);
	tab = (char**)malloc(sizeof(*tab) * j + 1);
	tab[j] = NULL;
	i = 0;
	j = 0;
	if (spaces(str[0]) == 0)
	{
		tab[j++] = create(str);
		i++;
	}
	while (j < count(str))
	{
		while (str[i])
		{
			if (spaces(str[i - 1]) && spaces(str[i]) == 0)
				tab[j++] = create(&str[i]);
			i++;
		}
	}
	return (tab);
}
