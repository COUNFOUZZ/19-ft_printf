/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:08:26 by aabda             #+#    #+#             */
/*   Updated: 2022/08/03 18:24:37 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_hex(const char format, va_list arg)
{
	int	nb;
	int	count;

	if (!arg)
		return (0);
	nb = va_arg(arg, int);
	count = ft_count_hex(nb);
	ft_putnbr_hex_fd(format, nb, 1);
	return (count);
}
