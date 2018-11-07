/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:40:53 by egranger          #+#    #+#             */
/*   Updated: 2018/08/16 09:17:22 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		countword(char *str)
{
	int i;
	int mot;
	int lettre;

	i = 0;
	mot = 0;
	lettre = 0;
	while (str[i])
	{
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
			i++;
		while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
		{
			lettre++;
			i++;
		}
		if (lettre > 0)
		{
			mot++;
		}
	}
	return (mot);
}

int		ctltr(char *str, int j, int mot, int len)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
		{
			if (mot == j)
			{
				while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
				{
					len++;
					i++;
				}
				return (len);
			}
			while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') &&
					str[i])
				i++;
			mot++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (-1);
}

char	**fuckingmalloc(char *str)
{
	char	**tab;
	int		i;

	i = 0;
	if (!(tab = malloc((countword(str) + 1) * sizeof(*tab))))
		return (0);
	return (tab);
}

char	*ft_strcpyskip(char *dest, char *src, int *i)
{
	int j;

	j = 0;
	while (src[*i] != '\0' && src[*i] != '\n' && src[*i] != '\t' &&
			src[*i] != ' ')
	{
		dest[j] = src[*i];
		*i = *i + 1;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		wc;
	char	**tab;

	i = 0;
	wc = 0;
	tab = fuckingmalloc(str);
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
		{
			if (!(tab[wc] = malloc((ctltr(str, wc, 0, 0) + 1) * sizeof(char))))
				return (0);
			tab[wc] = ft_strcpyskip(tab[wc], str, &i);
			wc++;
		}
		if (str[i])
			i++;
	}
	tab[wc] = 0;
	return (tab);
}
