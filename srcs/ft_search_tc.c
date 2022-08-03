/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_tc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:36:20 by aabda             #+#    #+#             */
/*   Updated: 2022/08/03 20:34:54 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_search_tc(const char *format, va_list arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (format && format[i + 1] == 's')
		count += ft_is_string(arg);
	if (format && format[i + 1] == 'c')
		count += ft_is_char(arg);
	if (format && format[i + 1] == 'u')
		count += ft_is_unsigned(arg);
	if (format && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		count += ft_is_int(arg);
	if (format && (format[i + 1] == 'x' || format[i + 1] == 'X'))
		count += ft_is_hex(format[i + 1], arg);
	if (format && format[i + 1] == 'p')
		count += ft_is_pointer(arg);
	if (format && format[i + 1] == '%')
		count += ft_is_percent(arg);
	return (count);
}
