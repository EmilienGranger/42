/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:54:21 by egranger          #+#    #+#             */
/*   Updated: 2018/08/16 09:31:33 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
	{
		tab = 0;
		return (tab);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	return (max - min);
}
