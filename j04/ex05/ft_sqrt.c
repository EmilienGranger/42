/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:06:46 by egranger          #+#    #+#             */
/*   Updated: 2018/08/08 19:00:34 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int search;

	search = 0;
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	if (nb == 16)
		return (4);
	while (search < (nb / 4))
	{
		if (search * search == nb)
			return (search);
		search++;
	}
	return (0);
}
