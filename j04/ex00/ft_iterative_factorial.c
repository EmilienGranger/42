/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:37:20 by egranger          #+#    #+#             */
/*   Updated: 2018/08/07 10:17:07 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int finalnumber;

	i = 1;
	finalnumber = 1;
	if (nb == 0)
		return (1);
	else if ((nb < 0) || (nb > 12))
		return (0);
	else
	{
		while (i <= nb)
		{
			finalnumber = i * finalnumber;
			i++;
		}
		return (finalnumber);
	}
}
