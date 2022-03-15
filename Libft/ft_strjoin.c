/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 08:50:17 by nkivilah          #+#    #+#             */
/*   Updated: 2021/11/15 12:46:34 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	clen;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	clen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	s = (char *)malloc(sizeof(char) * (clen + 1));
	if (!s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (i < clen)
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
