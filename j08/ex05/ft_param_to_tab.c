/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:15:34 by egranger          #+#    #+#             */
/*   Updated: 2018/08/22 13:05:12 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*s1;
	int		i;

	s1 = (char*)malloc(sizeof(*s1) * (ft_strlen(src) + 1));
	i = 0;
	while (i < ft_strlen(src))
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*opt;

	i = 0;
	opt = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		opt[i].size_param = ft_strlen(av[i]);
		opt[i].str = av[i];
		opt[i].copy = ft_strdup(av[i]);
		opt[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	opt[i].str = 0;
	return (opt);
}
