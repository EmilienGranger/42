/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:34:17 by egranger          #+#    #+#             */
/*   Updated: 2018/08/05 23:05:54 by egranger         ###   ########.fr       */
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
		return (1);
	i = 1;
	j = 1;
	while (j <= y)
	{
		if (((i == 1) && (j == 1)) || ((i == x) && (j == y)) || ((i == x) &&
					(j == 1)) || ((i == 1) && (j == y)))
			ft_putchar('o');
		else if ((i == 1) || (i == x))
			ft_putchar('|');
		else if ((j == 1) || (j == y))
			ft_putchar('-');
		else
			ft_putchar(' ');
		i++;
		if (i == x + 1)
			raccourci(&j, &i);
	}
	return (0);
}
