/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:04:30 by egranger          #+#    #+#             */
/*   Updated: 2018/08/19 19:25:44 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_printer(int *coor, int *matchtab)
{
	int i;
	int nb_of_matchs;

	i = 0;
	nb_of_matchs = 0;
	while (i < 5)
	{
		if (nb_of_matchs > 0 && matchtab[i] == 0)
			ft_putstr(" || ");
		if (matchtab[i] == 0)
		{
			ft_putstr("[colle-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(coor[0]);
			ft_putstr("] [");
			ft_putnbr(coor[1]);
			ft_putstr("]");
			nb_of_matchs++;
		}
		i++;
	}
	if (nb_of_matchs == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
