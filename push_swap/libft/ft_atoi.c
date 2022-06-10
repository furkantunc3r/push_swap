/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:07:52 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 10:48:17 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

void	check_is_digit(char	*str)
{
	if (!ft_isdigit(*str))
	{
		ft_printf("Error\n");
		exit (0);
	}
}

void	check_i(int i)
{
	if (i > 2147483647)
	{
		ft_printf("Error\n");
		exit (0);
	}
	if (i < -2147483648)
	{
		ft_printf("Error\n");
		exit (0);
	}
}

int	ft_atoi(const char *str)
{
	long long int	i;
	int				sign;

	i = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		i = (i * 10) + (*str - '0') * sign;
		str++;
		check_i(i);
	}
	return (i);
}
