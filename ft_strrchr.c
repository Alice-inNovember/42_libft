/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:23:51 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/11 13:08:01 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	returni;

	returni = 0;
	while (str[returni])
		returni++;
	return (returni);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s) - 1;
	while (0 <= slen)
	{
		if (s[slen] == c)
			return ((char *)&s[slen]);
		slen--;
	}
	return (0);
}
