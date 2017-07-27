/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:20:49 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/19 09:47:02 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (0);
}

int		main()
{
	char	src[]="salutifdsgsg";
	char	dest[]="pasclope";
	int		n;

	n = 2;
	ft_strcpy(dest, src, n);
	printf("Source = %s\nDestination = %s\n", src, dest);
	return (0);
}
