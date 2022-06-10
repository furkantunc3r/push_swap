/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:25:38 by ftuncer           #+#    #+#             */
/*   Updated: 2022/02/15 17:34:52 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		dp = dst + len;
		sp = src + len;
		while (len-- > 0)
		{
			*--dp = *--sp;
		}
	}
	else
	{
		dp = dst;
		sp = src;
		while (len-- > 0)
		{
			*dp++ = *sp++;
		}
	}
	return (dst);
}
