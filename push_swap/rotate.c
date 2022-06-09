/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:47:25 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 10:41:15 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_list **list)
{
	t_list	*holder;

	if (!*list)
		return ;
	holder = ft_lstnew((*list)->content);
	holder->rank = (*list)->rank;
	*list = (*list)->next;
	ft_lstadd_back(list, holder);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_list **list)
{
	t_list	*holder;

	if (!*list)
		return ;
	holder = ft_lstnew((*list)->content);
	holder->rank = (*list)->rank;
	*list = (*list)->next;
	ft_lstadd_back(list, holder);
	ft_printf("rb\n");
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_rotate_a(a);
	ft_rotate_b(b);
	ft_printf("ra\n");
	ft_printf("rb\n");
}
