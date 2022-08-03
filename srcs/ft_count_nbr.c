/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:20:03 by aabda             #+#    #+#             */
/*   Updated: 2022/08/03 18:38:39 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_int(int nb)
{
	int	count;

	if (nb == 0)
		return (1);
	count = 0;
	if (nb < 0)
		count++;
	while (nb)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

int	ft_count_hex(int nb)
{
	int	count;

	if (nb == 0)
		return (1);
	count = 0;
	if (nb < 0)
		count++;
	while (nb)
	{
		count++;
		nb = nb / 16;
	}
	return (count);
}