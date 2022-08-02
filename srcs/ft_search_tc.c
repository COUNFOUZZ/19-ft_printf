/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_tc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:36:20 by aabda             #+#    #+#             */
/*   Updated: 2022/08/02 18:07:54 by aabda            ###   ########.fr       */
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
	if (format && format[i + 1] == 'd')
		count += ft_is_int(arg);
	return (count);
}
