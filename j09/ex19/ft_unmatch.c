/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:54:41 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 15:34:02 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;
	int count;

	count = 0;
	while (count < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		count++;
	}
	return (tab);
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	tab = ft_sort_integer_table(tab, length);
	while (i < length - 2)
	{
		if (tab[i] != tab[i + 1])
			return (tab[i]);
		i = i + 2;
	}
	return (tab[i]);
}
