/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:47:33 by egranger          #+#    #+#             */
/*   Updated: 2018/08/07 17:47:41 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (i >= 1)
	{
		i--;
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else
	{
		nb = 1;
		return (nb);
	}
}
