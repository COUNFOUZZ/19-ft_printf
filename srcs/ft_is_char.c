/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:48:19 by aabda             #+#    #+#             */
/*   Updated: 2022/08/01 18:06:37 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_char(const char *format, va_list arg)
{
	char	c;

	if (!format || !arg)
		return (0);
	c = va_arg(arg, int);
	ft_putchar_fd(c, 1);
	return (1);
}
