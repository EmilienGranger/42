/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_colle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 10:26:57 by egranger          #+#    #+#             */
/*   Updated: 2018/08/19 19:02:27 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_read_colle(void)
{
	int		size;
	char	c;
	char	*tab1;
	char	*tab2;

	size = 1;
	while (read(0, &c, 1) > 0)
	{
		if (!(tab1 = malloc(sizeof(*tab1) * (size + 1))))
			return (0);
		if (size > 1)
		{
			ft_strcpy(tab1, tab2);
			free(tab2);
		}
		tab1[size - 1] = c;
		tab1[size] = '\0';
		if (!(tab2 = (char*)malloc(sizeof(*tab2) * (size + 1))))
			return (0);
		ft_strcpy(tab2, tab1);
		free(tab1);
		size++;
	}
	return (tab2);
}

int		*ft_size_tab(char *str)
{
	int		*coor;
	int		i;

	coor = (int*)malloc(sizeof(*coor) * (2 + 1));
	if (!coor)
		return (0);
	i = 0;
	coor[0] = 0;
	coor[1] = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			coor[1]++;
		i++;
	}
	i = 0;
	while (str[i] != '\n')
	{
		coor[0]++;
		i++;
	}
	return (coor);
}
