/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:04:00 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/06 10:27:41 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int in)
{
	if (in < 'A' || in > 'Z')
		return (0);
	return (1);
}

static int	ft_islower(int in)
{
	if (in < 'a' || in > 'z')
		return (0);
	return (1);
}

int	ft_isalpha(int in)
{
	if (ft_isupper(in))
		return (1);
	if (ft_islower(in))
		return (2);
	else
		return (0);
}
