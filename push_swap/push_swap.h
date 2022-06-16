/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:41:18 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/16 12:01:02 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

void	ft_push_a(t_list **a, t_list **b);
void	ft_push_b(t_list **a, t_list **b);
void	ft_rotate_a(t_list **a);
void	ft_rotate_b(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_reverse_rotate_a(t_list **a);
void	ft_reverse_rotate_b(t_list **b);
void	ft_rrr(t_list **a, t_list **b);
void	ft_swap_a(t_list **a);
void	ft_swap_b(t_list **b);
void	ft_ss(t_list *a, t_list *b);
int		ft_check_if_sort(t_list *a);
void	ft_check_arg(char *str, t_list **a);
void	ft_check_if_dup(t_list *a);
int		ft_find_len(t_list *a);
int		ft_get_index(t_list *a, int i);
int		big_index(t_list *stack);
void	ft_sort_mk2(t_list **a, t_list **b);
void	ft_sort_mk3(t_list **a, t_list **b);
void	ft_give_rank(t_list **list);
void	push_chunk(t_list **a, t_list **b, int j);
void	small_sort(t_list **list);
void	size_five(t_list **list1, t_list **list2);
int		min_index(t_list *list);
void	clear_stuff(t_list **a, t_list **b);
void	check_and_promote(t_list **a);
int		check_is_digit(const char	*str);
#endif
