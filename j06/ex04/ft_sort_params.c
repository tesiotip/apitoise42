/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apitoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:26:22 by apitoise          #+#    #+#             */
/*   Updated: 2017/07/22 17:12:53 by apitoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		cmp;
	int		i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	cmp = s1[i] - s2[i];
	return (cmp);
}

void	ft_putstr(char *str)
{
	int		b;

	b = 0;
	while (str[b] != '\0')
	{
		ft_putchar(str[b]);
		b++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	if (argc == 1)
		return (0);
	while (argv[i + 1] != '\0')
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (argv[i] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
