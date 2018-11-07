/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:33:24 by egranger          #+#    #+#             */
/*   Updated: 2018/08/19 17:38:15 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
char	*delete_whitespaces(char *str);
int		create_atoms(char **str2);
int		create_summands(char **str2);
int		create_factors(char **str2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_calc(int str1, int str2, char op);
int		eval_expr(char *str);
int		main(int ac, char **av);
char	*ft_strcpy(char *dest, char *src);

#endif
