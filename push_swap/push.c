/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:46:45 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 15:46:42 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **liste1, t_list **liste2)
{
	t_list	*holder;
	t_list	*holder2;

	holder = *liste1;
	holder2 = *liste2;
	*liste1 = (*liste1)->next;
	*liste2 = holder;
	(*liste2)->next = holder2;
}

void	ft_push_b(t_list **a, t_list **b)
{
	if (!(*a))
		return ;
	ft_push(a, b);
	ft_printf("pb\n");
}

void	ft_push_a(t_list **a, t_list **b)
{
	if (!(*b))
		return ;
	ft_push(b, a);
	ft_printf("pa\n");
}

void	check_and_promote(t_list **a)
{
	ft_check_if_dup(*a);
	ft_give_rank(a);
}
