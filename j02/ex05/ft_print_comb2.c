/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 19:15:04 by egranger          #+#    #+#             */
/*   Updated: 2018/08/03 10:36:39 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b)
{
	if ((a < 100) && (b < 100))
	{
		if (a < b)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(' ');
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			if (!((a == 98) && (b == 99)))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b++;
		ft_print(a, b);
		if (b == 100)
		{
			a++;
			b = 0;
		}
	}
}
