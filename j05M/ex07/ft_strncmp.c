/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 17:59:22 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 20:43:10 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		cmp;
	unsigned int	i;

	cmp = 0;
	i = 0;
	while((s1[i] == s2[i]) && (s1[i]) && (s2[i]) && (i < n))
		i++;
	cmp = s1[i] - s2[i];
	return (cmp);
}

int		main()
{
	printf("%d", ft_strncmp("zdefghi", "zzzzzzz", 2));
	return (0);
}

