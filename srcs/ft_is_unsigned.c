/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:35:29 by aabda             #+#    #+#             */
/*   Updated: 2022/08/03 20:41:12 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_unsigned(va_list arg)
{
	unsigned int	nb;
	int				count;

	if (!arg)
		return (0);
	nb = va_arg(arg, unsigned int);
	count = ft_count_unsigned(nb);
	ft_putnbr_unsigned_fd(nb, 1);
	return (count);
}
