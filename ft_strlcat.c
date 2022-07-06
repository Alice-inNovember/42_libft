/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:00:09 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/06 14:50:57 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	un_strl(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void	uppendstr(char *dest, char *src, size_t destl, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i + destl + 1 < size)
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = 0;
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	destl;
	size_t	srcl;

	destl = un_strl(dest);
	srcl = un_strl(src);
	if (destl > size)
		return (srcl + size);
	uppendstr(dest, src, destl, size);
	return (destl + srcl);
}
