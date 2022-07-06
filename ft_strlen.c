/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:51:35 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/06 17:17:53 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	returni;

	returni = 0;
	while (str[returni])
		returni++;
	return (returni);
}
