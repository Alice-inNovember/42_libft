/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:20:09 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/11 15:17:55 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_toacal(char *returns, int size, int sign, int n)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		returns[size - i] = -(n % 10) + '0';
		n /= 10;
		i++;
	}
	returns[size] = 0;
	if (sign == -1)
		returns[0] = '-';
	return (returns);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		size;
	int		temp;
	char	*returns;

	sign = -1;
	size = 1;
	if (n >= 0)
	{
		n *= -1;
		sign = 1;
		size = 0;
	}
	temp = n;
	while (temp < 0)
	{
		temp /= 10;
		size++;
	}
	returns = (char *)malloc(size + 1);
	return (ft_toacal);
}
