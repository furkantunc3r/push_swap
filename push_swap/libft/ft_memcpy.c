/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:49:11 by ftuncer           #+#    #+#             */
/*   Updated: 2022/02/15 14:19:33 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	if (!dst && !src)
		return (0);
	a = dst;
	b = src;
	while (n-- > 0)
	{
		*a++ = *b++;
	}
	return (dst);
}
