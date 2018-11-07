/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:09:07 by egranger          #+#    #+#             */
/*   Updated: 2018/08/21 16:29:53 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return (ft_strcmp(s1 + 1, s2 + 1));
}

void	ft_sort_wordtab(char **tab)
{
	int		length;
	int		i;
	char	*temp;

	length = 0;
	i = 0;
	while (tab[length] != '\0')
	{
		length++;
	}
	length--;
	while (i < length)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
