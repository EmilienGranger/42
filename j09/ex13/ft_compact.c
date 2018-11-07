/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:53:02 by egranger          #+#    #+#             */
/*   Updated: 2018/08/10 15:26:10 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (tab[i][j] == '\0')
		{
			tab[i] = tab[i + 1];
			j = j + 1;
		}
		i++;
	}
	return (length - j);
}