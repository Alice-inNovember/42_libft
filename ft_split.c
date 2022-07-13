/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:11:17 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/13 12:37:09 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_issame(char a, char b)
{
	if (a == b)
		return (1);
	return (0);
}

static int	word_count(char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_issame(str[i], c))
			i++;
		else
		{
			count++;
			while (!ft_issame(str[i], c) && str[i])
				i++;
		}
	}
	return (count);
}

static int	str_malloc(char **returnarr, char *str, char c, int count)
{
	int	i;
	int	strsize;

	strsize = 0;
	while (!ft_issame(str[strsize], c) && str[strsize])
		strsize++;
	returnarr[count] = (char *)malloc(sizeof(char) * (strsize + 1));
	if (!returnarr[count])
		return (0);
	i = 0;
	while (i < strsize)
	{
		returnarr[count][i] = str[i];
		i++;
	}
	returnarr[count][i] = 0;
	return (i);
}

static int	word_malloc(char **returnarr, char *str, char c)
{
	int	count;
	int	temp;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_issame(str[i], c))
			i++;
		else
		{
			temp = str_malloc(returnarr, &str[i], c, count);
			if (!temp)
				return (0);
			i += temp;
			count++;
		}
	}
	returnarr[count] = 0;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**returnarr;
	int		wcount;

	wcount = word_count((char *)s, c);
	returnarr = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!returnarr)
		return (returnarr);
	word_malloc(returnarr, (char *)s, c);
	return (returnarr);
}
