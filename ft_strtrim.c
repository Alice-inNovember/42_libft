/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:38:27 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/13 12:39:34 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	returni;

	returni = 0;
	while (str[returni])
		returni++;
	return (returni);
}

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
	int	setlen;
	int	s_index;
	int	s_len;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	s_index = 0;
	s_len = s1len;
	if (setlen > s1len)
		return (ft_substr(s1, 0, s1len));
	if (ft_strncmp(s1, set, setlen) == 0)
		s_index = setlen - 1;
	if (ft_strncmp(&s1[s1len - setlen - 1], set, setlen))
		s_len = s1len - setlen;
	return (ft_substr(s1, s_index, s_len));
}
