/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:20:03 by aabda             #+#    #+#             */
/*   Updated: 2022/08/02 18:34:16 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_count_int(int nb)
{
	int	count;

	if (!nb)
		return (0);
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
