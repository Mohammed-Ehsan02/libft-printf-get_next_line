/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:25:49 by mkhan             #+#    #+#             */
/*   Updated: 2022/06/30 12:27:25 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexalow(unsigned int n)
{
	int		len;
	char	*s;

	len = 0;
	s = "0123456789abcdef";
	if (n > 15)
		len += ft_hexalow(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}
