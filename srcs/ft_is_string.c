/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:50:12 by aabda             #+#    #+#             */
/*   Updated: 2022/08/03 18:38:53 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_string(va_list arg)
{
	char	*s;

	if (!arg)
		return (0);
	s = va_arg(arg, char *);
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
