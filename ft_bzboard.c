/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 22:54:44 by dleong            #+#    #+#             */
/*   Updated: 2017/11/03 00:07:41 by dleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_bzboard(char *s, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			s[j + (i * (n + 1))] = '.';
			j++;
		}
		if ((j % n) == 0)
		{
			s[j + (i * (n + 1))] = '\n';
			j++;
		}
		i++;
	}
	s[i * (n + 1)] = '\0';
	return (s);
}
