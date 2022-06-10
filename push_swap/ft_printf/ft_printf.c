/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:47:33 by ftuncer           #+#    #+#             */
/*   Updated: 2022/03/21 13:27:27 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_sort_format(va_list args, char format)
{
	int	ret_len;

	ret_len = 0;
	if (format == 'c')
		ret_len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		ret_len += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		ret_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'i' || format == 'd')
		ret_len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		ret_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		ret_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		ret_len += ft_print_percent();
	return (ret_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret_len;

	i = 0;
	ret_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ret_len += ft_sort_format(args, str[i]);
		}
		else
			ret_len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (ret_len);
}
