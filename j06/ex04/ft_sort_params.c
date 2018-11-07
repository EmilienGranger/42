/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:01:24 by egranger          #+#    #+#             */
/*   Updated: 2018/08/20 16:25:00 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') ||
			(s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_putchar(char c);

void	printer(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 0;
	while (i++ < argc - 1)
	{
		if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
	}
	printer(argc, argv);
	return (0);
}
