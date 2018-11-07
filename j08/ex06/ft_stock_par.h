/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:43:50 by egranger          #+#    #+#             */
/*   Updated: 2018/08/21 16:00:04 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

char				**ft_split_whitespaces(char *str);
void				ft_putchar(char c);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

#endif
