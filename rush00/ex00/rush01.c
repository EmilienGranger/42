/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 10:23:56 by egranger          #+#    #+#             */
/*   Updated: 2018/08/05 23:17:06 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

	if (x <= 0 || y <= 0)
		return(1);
	i = 1;
	j = 1;
	while (j <= y)
	{
		if (((i == 1) && (j == 1)) ||
				((i == x) && (j == y) && ((y != 1) && (x != 1))))
			ft_putchar('/');
		else if (((i == x) && (j == 1)) || ((i == 1) && (j == y)))
			ft_putchar('\\');
		else if (i > 1 && i < x && j > 1 && j < y)
			ft_putchar(' ');
		else
			ft_putchar('*');
		i++;
		if (i == x + 1)
			raccourci(&j, &i);
	}
	return (0);
}
