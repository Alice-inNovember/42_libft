/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:11:17 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/11 13:14:02 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_issame(int a, int b)
{
	if (a == b)
		return (1);
	return (0);
}

static char	**ft_freearr(char ***s_arr)
{
	int	i;

	i = 0;
	while (!(*s_arr)[i])
	{
		free((*s_arr)[i]);
		i++;
	}
	free(s_arr);
	return (0);
}

static int	ft_strmalloc(char **s_arr, char *str, char c, int line)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (ft_issame(str[i], c) && str[i])
		i++;
	while (!ft_issame(str[i + len], c) && str[i + len])
		len++;
	s_arr[line] = (char *)malloc(len + 1);
	if (!s_arr[line])
		return (0);
	len = 0;
	while (!ft_issame(str[i + len], c) && str[i + len])
	{
		s_arr[line][len] = str[i + len];
		len++;
	}
	s_arr[line][len] = 0;
	s_arr[line + 1] = 0;
	str = &str[i + len];
	return (1);
}

char	**ft_split(char const*s, char c)
{
	int		strcount;
	int		i;
	char	**s_arr;

	strcount = 1;
	i = 0;
	while (s[i])
	{
		if (ft_issame(s[i], c))
			strcount++;
		i++;
	}
	s_arr = (char **)malloc(strcount);
	if (!s_arr)
		return (0);
	i = 0;
	while (i < strcount)
	{
		if (!ft_strmalloc(s_arr, s, c, i))
			return (ft_freearr(*s_arr));
		i++;
	}
	return (s_arr);
}
