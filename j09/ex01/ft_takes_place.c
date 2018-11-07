/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:42:22 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 16:36:31 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		morning(int hour)
{
	if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN 12.00 A.M. AND %d.00 A.M.\n", hour + 1);
	}
	if (hour <= 10 && hour > 0)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	}
	else if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 A.M. AND %d.00 P.M.\n", 11, 12);
	}
	else if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 P.M. AND %d.00 P.M.\n", 12, 01);
	}
	return (0);
}

int		afternoon(int hour)
{
	if (hour >= 12 && hour <= 22)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN %d.00 P.M. AND %d.00 P.M.\n", hour, hour + 1);
	}
	else if (hour == 23)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE");
		printf(" BETWEEN %d.00 P.M. AND 12.00 A.M.\n", hour);
	}
	else if (hour == 0 || hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE ");
		printf("BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	}
	return (0);
}

void	ft_takes_place(int hour)
{
	if (hour <= 12)
		morning(hour);
	else
		afternoon(hour);
}
