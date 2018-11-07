/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:09:25 by egranger          #+#    #+#             */
/*   Updated: 2018/08/17 16:51:39 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int nbr;
	int finalnumber;

	i = 0;
	sign = 1;
	nbr = 0;
	finalnumber = 0;
	while ((str[i] >= 0 && str[i] <= 32) || str[i] == 43)
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = str[i] - '0';
		finalnumber = finalnumber * 10 + nbr;
		i++;
	}
	return (sign * finalnumber);
}
