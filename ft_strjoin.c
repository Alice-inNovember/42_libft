/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:40:39 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/07 10:53:32 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

static size_t	ft_strlen(const char *str)
{
	size_t	returni;

	returni = 0;
	while (str[returni])
		returni++;
	return (returni);
}

static void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = (unsigned char)0;
	}
}

static void	strcat(char *dest, char *srcs)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest = &dest[i];
	i = 0;
	while (srcs[i])
	{
		dest[i] = srcs[i];
		i++;
	}
	dest[i] = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	char	*returns;

	totallen = ft_strlen(s1) + ft_strlen(s2);
	returns = (char *)malloc(totallen + 1);
	if (!returns)
	{
		errno = ENOMEM;
		return (0);
	}
	ft_bzero(returns, totallen + 1);
	strcat(returns, s1);
	strcat(returns, s2);
	return (returns);
}
