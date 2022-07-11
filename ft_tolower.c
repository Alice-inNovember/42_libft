/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:21:32 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/11 13:08:02 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int in)
{
	if (in < 'A' || in > 'Z')
		return (0);
	return (1);
}

int	ft_tolower(int in)
{
	if (ft_isupper(in))
		return (in + 32);
	return (in);
}
