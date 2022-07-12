/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 08:51:48 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/12 14:30:32 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = (unsigned char)0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*returnptr;

	returnptr = (unsigned char *)malloc(count * size);
	if (!returnptr)
		return (0);
	ft_bzero((void *)returnptr, count * size);
	return ((void *)returnptr);
}
