/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:42:54 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/18 18:09:58 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
		while(src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	return (0);
}

int		main()
{
	char	src[]="salut";
	char	dest[]="pasclope";

	ft_strcpy(dest, src);
	printf("Source = %s\nDestination = %s\n", src, dest);
	return (0);
}
