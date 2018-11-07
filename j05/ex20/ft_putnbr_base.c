/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:13:38 by egranger          #+#    #+#             */
/*   Updated: 2018/08/15 15:44:20 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		sizebase(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int newbase[100];
	int size;

	i = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	size = sizebase(base);
	if (size > 1)
	{
		while (nbr)
		{
			newbase[i] = nbr % size;
			nbr = nbr / size;
			i++;
		}
	}
	if (i == 0)
		ft_putchar(base[newbase[i]]);
	while (--i >= 0)
		ft_putchar(base[newbase[i]]);
}

int main(int argc, char **argv)
{
	argc = 0;
	ft_putnbr_base(10, argv[1]);
	return 0;
}
