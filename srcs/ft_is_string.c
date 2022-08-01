/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:50:12 by aabda             #+#    #+#             */
/*   Updated: 2022/08/01 18:07:11 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_string(const char *format, va_list arg)
{
	char	*s;

	if (!format || !arg)
		return (0);
	s = va_arg(arg, char *);
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
