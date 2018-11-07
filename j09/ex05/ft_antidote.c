/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:49:48 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 15:21:43 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i >= k && i <= j))
		return (i);
	else if ((j >= i && j <= k) || (j >= k && j <= i))
		return (j);
	else if ((k >= i && k <= j) || (k >= j && k <= i))
		return (k);
	return (0);
}
