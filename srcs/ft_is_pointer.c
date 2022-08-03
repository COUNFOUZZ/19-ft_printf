/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:33:57 by aabda             #+#    #+#             */
/*   Updated: 2022/08/03 20:21:26 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_pointer(va_list arg)
{
	unsigned long	nb;
	int				count;

	if (!arg)
		return (0);
	nb = va_arg(arg, unsigned long);
	count = ft_count_hex(nb);
	ft_putstr_fd("0x", 1);
	ft_putnbr_hex_pointer_fd(nb, 1);
	return (count + 2);
}
