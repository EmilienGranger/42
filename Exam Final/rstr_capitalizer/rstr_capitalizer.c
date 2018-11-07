/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:27:06 by exam              #+#    #+#             */
/*   Updated: 2018/08/24 12:10:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\0')
		return (1);
	else
		return (0);
}

char	*lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

void	ft_printer_rcapitalize(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	while (str[i])
	{
		if (ft_isspace(str[i + 1]) == 1 &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			lowercase(argv[i]);
			ft_printer_rcapitalize(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	if (argc == 1)
		ft_putchar('\n');
	return (0);
}
