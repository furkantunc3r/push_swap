/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:25:21 by ftuncer           #+#    #+#             */
/*   Updated: 2022/05/26 13:08:38 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_sort_format(va_list args, char format);
int		ft_printchar(int c);

int		ft_print_percent(void);
int		ft_print_nbr(int n);
int		ft_print_str(char *str);

int		ft_print_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned int num);

int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

int		ft_ptr_len(unsigned long long num);
void	ft_put_ptr(unsigned long long num);
int		ft_print_ptr(unsigned long long ptr);

#endif
