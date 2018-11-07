/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egranger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 10:39:14 by egranger          #+#    #+#             */
/*   Updated: 2018/08/14 14:43:27 by egranger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
