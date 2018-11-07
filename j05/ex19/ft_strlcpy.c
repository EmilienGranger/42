/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:34:02 by egranger          #+#    #+#             */
/*   Updated: 2018/08/13 14:28:32 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;

	d = dest;
	s = src;
	n = size;
	if (n != 0 && --n != 0)
	{
		if ((*d++ = *s++) == '\0')
			return (0);
		if (n - 1 != 0)
			while (n != 0)
				n--;
		else
			n = n - 1;
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s)
			s++;
	}
	return (s - src);
}
