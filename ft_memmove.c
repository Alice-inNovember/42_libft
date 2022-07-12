/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:56:49 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/12 16:25:36 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst <= src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = 1;
		while (0 != n - i)
		{
			((unsigned char *)dst)[n - i] = ((unsigned char *)src)[n - i];
			i++;
		}
		((unsigned char *)dst)[0] = ((unsigned char *)src)[0];
	}
	return (dst);
}
