/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 09:59:42 by egranger          #+#    #+#             */
/*   Updated: 2018/08/05 22:57:52 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		neg(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (1);
	return (0);
}

void	raccourci(int *j, int *i)
{
	*j += 1;
	*i = 1;
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	neg(x, y);
	while (j <= y)
	{
		if (((i == 1) && (j == 1)) ||
				((i == x) && (j == y) && ((y != 1) && (x != 1))))
			ft_putchar('A');
		else if (((i == x) && (j == 1)) || ((i == 1) && (j == y)))
			ft_putchar('C');
		else if (i > 1 && i < x && j > 1 && j < y)
			ft_putchar(' ');
		else
			ft_putchar('B');
		i++;
		if (i == x + 1)
			raccourci(&j, &i);
	}
	return (0);
}
