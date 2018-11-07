/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:54:11 by egranger          #+#    #+#             */
/*   Updated: 2018/08/19 14:32:19 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*delete_whitespaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	if (!(str2 = (char*)malloc(sizeof(*str2) * ft_strlen(str) + 1)))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
	ft_strcpy(str, str2);
	free(str2);
	return (str);
}

int		create_atoms(char **str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		*str = *str + 1;
		nbr = create_summands(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (sign * nbr);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		nbr = (nbr * 10) + (*str)[0] - '0';
		*str = *str + 1;
	}
	return (sign * nbr);
}

int		create_summands(char **strcopy)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = create_atoms(strcopy);
	while ((*strcopy)[0] != '\0' && (*strcopy)[0] != ')')
	{
		op = (*strcopy)[0];
		*strcopy = *strcopy + 1;
		if (op == '+' || op == '-')
			nbr2 = create_factors(strcopy);
		else
			nbr2 = create_atoms(strcopy);
		nbr1 = ft_calc(nbr1, nbr2, op);
	}
	return (nbr1);
}

int		create_factors(char **str)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = create_atoms(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		op = (*str)[0];
		*str = *str + 1;
		nbr2 = create_atoms(str);
		nbr1 = ft_calc(nbr1, nbr2, op);
	}
	return (nbr1);
}

int		eval_expr(char *str)
{
	str = delete_whitespaces(str);
	if (str[0] == '\0')
		return (0);
	return (create_summands(&str));
}
