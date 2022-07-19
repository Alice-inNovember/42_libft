/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:38:27 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/19 15:12:28 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	returni;

	returni = 0;
	while (str[returni])
		returni++;
	return (returni);
}

static int	ft_isset(char a, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*returns;
	size_t	i;

	returns = (char *)malloc(len + 1);
	if (!returns)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		returns[i] = s[start + i];
		i++;
	}
	returns[i] = 0;
	return (returns);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	s1len;
	int	f_trim;
	int	l_trim;

	s1len = ft_strlen(s1);
	f_trim = 0;
	l_trim = 0;
	while (ft_isset(s1[f_trim], set))
		f_trim++;
	while (ft_isset(s1[s1len - 1 - l_trim], set))
	{
		if (!(s1len - f_trim - l_trim >= 0))
			break ;
		l_trim ++;
	}
	return (ft_substr(s1, f_trim, s1len - f_trim - l_trim));
}
