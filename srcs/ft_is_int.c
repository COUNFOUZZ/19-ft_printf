/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:24:34 by aabda             #+#    #+#             */
/*   Updated: 2022/08/02 18:26:06 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_int(va_list arg)
{
	int	nb;
	int	count;

	if (!arg)
		return (0);
	nb = va_arg(arg, int);
	count = ft_count_int(nb);
	ft_putnbr_fd(nb, 1);
	return (count);
}
