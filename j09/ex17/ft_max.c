/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:20:23 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 15:27:16 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_sort_integer_table(int *tab, int length)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i < length)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return (tab);
}

int		ft_max(int *tab, int length)
{
	ft_sort_integer_table(tab, length);
	return (tab[length]);
}
