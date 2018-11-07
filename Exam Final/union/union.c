/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 10:40:51 by exam              #+#    #+#             */
/*   Updated: 2018/08/24 11:20:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		lookback(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

int		checkstr(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_union_write(char *str, char *str1)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (checkstr(str, str1[i]) == 1 && lookback(str1, str1[i], i) == 1)
			ft_putchar(str1[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (lookback(argv[1], argv[1][i], i) == 1)
				ft_putchar(argv[1][i++]);
			else
				i++;
		}
		ft_union_write(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
