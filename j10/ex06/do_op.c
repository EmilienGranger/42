/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:19:48 by egranger          #+#    #+#             */
/*   Updated: 2018/08/22 17:59:24 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	supercalculateur(t_op numbers, char *op)
{
	void	(*tab[5])(int, int);

	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
	if (*op == '+')
		tab[0](numbers.nbr1, numbers.nbr2);
	if (*op == '-')
		tab[1](numbers.nbr1, numbers.nbr2);
	if (*op == '*')
		tab[2](numbers.nbr1, numbers.nbr2);
	if (*op == '/')
		tab[3](numbers.nbr1, numbers.nbr2);
	if (*op == '%')
		tab[4](numbers.nbr1, numbers.nbr2);
}

void	do_op(char *nbr1, char *op, char *nbr2)
{
	t_op numbers;

	numbers.nbr1 = ft_atoi(nbr1);
	numbers.nbr2 = ft_atoi(nbr2);
	if (op[1] != '\0' || (op[0] != '/' && op[0] != '*' && op[0] != '+' &&
				op[0] != '-' && op[0] != '%'))
		write(1, "0\n", 2);
	else if (op[0] == '/' && numbers.nbr2 == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (op[0] == '%' && numbers.nbr2 == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		supercalculateur(numbers, op);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
