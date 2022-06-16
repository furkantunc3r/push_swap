/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:21:20 by ftuncer           #+#    #+#             */
/*   Updated: 2022/02/15 14:50:49 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*result;

	slen = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (slen + 1));
	if (!result)
		return (0);
	slen = 0;
	while (s[slen])
	{
		result[slen] = s[slen];
		slen++;
	}
	result[slen] = '\0';
	return (result);
}
