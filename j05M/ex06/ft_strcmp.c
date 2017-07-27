/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 17:59:22 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/17 19:18:55 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		cmp;

	i = 0;
	cmp = 0;
	while((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	cmp = s1[i] - s2[i];
	return (cmp);
}

int		main()
{
	printf("%d", ft_strcmp(" sadfdf", "zsfsfa"));
	return (0);
}

