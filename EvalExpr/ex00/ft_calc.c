/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:29:10 by egranger          #+#    #+#             */
/*   Updated: 2018/08/19 14:29:13 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_calc(int str1, int str2, char op)
{
	if (op == '+')
		return (str1 + str2);
	else if (op == '-')
		return (str1 - str2);
	else if (op == '*')
		return (str1 * str2);
	else if (op == '/')
		return (str1 / str2);
	else if (op == '%')
		return (str1 % str2);
	else
		return (0);
}
