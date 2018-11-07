/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:40:28 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 15:32:22 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	{
		if (base % 2 == 0)
		{
			base = ft_collatz_conjecture(base / 2) + 1;
		}
		else
			base = ft_collatz_conjecture((base * 3) + 1) + 1;
	}
	return (base);
}
