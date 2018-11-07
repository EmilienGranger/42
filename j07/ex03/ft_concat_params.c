/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 11:09:38 by egranger          #+#    #+#             */
/*   Updated: 2018/08/17 11:28:50 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;

	i = 0;
	if (!(tab = malloc((argc + 1) * sizeof(char))))
		return (0);
	while (argv[i] && i < argc - 1)
	{
		tab = ft_strcat(tab, argv[i + 1]);
		if (i < argc - 2)
			tab = ft_strcat(tab, "\n");
		i++;
	}
	return (tab);
}
