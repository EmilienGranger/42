/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:10:26 by egranger          #+#    #+#             */
/*   Updated: 2018/08/19 19:24:22 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		*ft_cmp_colles(char *str, int *coor, int *matchtab)
{
	int	i;

	i = -1;
	while (++i < 5)
	{
		if (i == 0)
			matchtab[i] = ft_strcmp(rush00(coor[0], coor[1]), str);
		else if (i == 1)
			matchtab[i] = ft_strcmp(rush01(coor[0], coor[1]), str);
		else if (i == 2)
			matchtab[i] = ft_strcmp(rush02(coor[0], coor[1]), str);
		else if (i == 3)
			matchtab[i] = ft_strcmp(rush03(coor[0], coor[1]), str);
		else if (i == 4)
			matchtab[i] = ft_strcmp(rush04(coor[0], coor[1]), str);
	}
	return (matchtab);
}
