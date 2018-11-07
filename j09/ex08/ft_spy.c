/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:28:42 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 15:36:37 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_space_skip(char *str)
{
	int i;

	while (str[0] != '\0' && str[0] == ' ')
	{
		i = 0;
		while (str[i])
		{
			str[i] = str[i + 1];
			i++;
		}
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 1;
	if (s1 == s2)
		return (0);
	while (s1[i] == s2[i])
	{
		i++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argc)
	{
		while (argv[i])
		{
			argv[i] = ft_space_skip(argv[i]);
			if ((ft_strcmp(argv[i], "president") == 0) ||
					(ft_strcmp(argv[i], "attack") == 0) ||
					(ft_strcmp(argv[i], "Bauer") == 0))
			{
				ft_putstr("Alert!!!");
				return (0);
			}
			else
				i++;
		}
	}
	return (1);
}
