/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_tc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:36:20 by aabda             #+#    #+#             */
/*   Updated: 2022/08/01 18:06:03 by aabda            ###   ########.fr       */
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
		count += ft_is_string(format, arg);
	if (format && format[i + 1] == 'c')
		count += ft_is_char(format, arg);
	return (count);
}
