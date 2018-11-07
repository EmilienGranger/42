/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 12:15:15 by exam              #+#    #+#             */
/*   Updated: 2018/08/24 13:00:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr == 1 || nbr == 2)
		return (1);
	else
		while (i < (nbr / 2) + 1)
		{
			if (nbr % i == 0)
			{
				return (i);
			}
			i++;
		}
	return (1);
}

int		main(int argc, char **argv)
{
	int nbr;
	int i;

	i = 0;
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (ft_is_prime(nbr) == 1)
			printf("%d", nbr);
		else
		{
			while (ft_is_prime(nbr) != 1)
			{
				printf("%d", ft_is_prime(nbr));
				printf("%c", '*');
				nbr = nbr / ft_is_prime(nbr);
			}
			printf("%d", nbr);
		}
	}
	printf("%c", '\n');
}
