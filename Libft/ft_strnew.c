/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:10:02 by nkivilah          #+#    #+#             */
/*   Updated: 2021/11/15 12:46:45 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	ft_memset(str, 0, size);
	str[size] = '\0';
	return (str);
}
