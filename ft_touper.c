/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touper..c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:07:15 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/11 13:08:04 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int in)
{
	if (in < 'a' || in > 'z')
		return (0);
	return (1);
}

int	ft_touper(int in)
{
	if (ft_islower(in))
		return (in - 32);
	return (in);
}
