/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:53:41 by egranger          #+#    #+#             */
/*   Updated: 2018/08/03 10:18:30 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_diff(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (!((a == 7) && (b == 8) && (c == 9)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_print_diff(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
