/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:18:28 by egranger          #+#    #+#             */
/*   Updated: 2018/08/21 13:49:11 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	char	*tab;
	int		*coor;
	int		*matchtab;

	tab = ft_read_colle();
	coor = ft_size_tab(tab);
	matchtab = (int*)malloc(sizeof(*matchtab) * 5);
	if (!matchtab)
		return (0);
	ft_cmp_colles(tab, coor, matchtab);
	ft_printer(coor, matchtab);
	return (0);
}
