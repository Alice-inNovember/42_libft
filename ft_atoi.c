/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:19:44 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/07 08:46:11 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char in)
{
	if (in == '\t' || in == '\n' || in == '\v')
		return (1);
	if (in == '\f' || in == '\r' || in == ' ')
		return (1);
	return (0);
}

static char	*ft_delspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	return (&str[i]);
}

int	ft_atoi(const char *str)
{
	char	*temp;
	int		returni;
	int		sign;
	int		i;

	temp = ft_delspace(temp);
	returni = 0;
	sign = 1;
	i = 0;
	if (temp[i] == '+')
		i++;
	else if (temp[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (temp[i] >= '0' && temp[i] <= '9')
	{
		returni *= 10;
		returni += temp[i] - '0';
		i++;
	}
	return (returni * sign);
}
