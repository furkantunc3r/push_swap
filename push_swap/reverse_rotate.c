/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:29:17 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 10:41:14 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_list **list)
{
	t_list	*holder1;
	t_list	*holder2;

	if (!*list || ft_lstsize(*list) < 2)
		return ;
	holder1 = ft_lstnew(ft_lstlast(*list)->content);
	holder1->rank = (*list)->rank;
	holder2 = *list;
	while (list)
	{
		*list = (*list)->next;
		if ((*list)->next->next == NULL)
		{
			(*list)->next = NULL;
			break ;
		}
	}
	ft_lstadd_front(&holder2, holder1);
	*list = holder1;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_list **list)
{
	t_list	*holder1;
	t_list	*holder2;

	if (!*list || ft_lstsize(*list) < 2)
		return ;
	holder1 = ft_lstnew(ft_lstlast(*list)->content);
	holder1->rank = (*list)->rank;
	holder2 = *list;
	while (list)
	{
		*list = (*list)->next;
		if ((*list)->next->next == NULL)
		{
			(*list)->next = NULL;
			break ;
		}
	}
	ft_lstadd_front(&holder2, holder1);
	*list = holder1;
	ft_printf("rrb\n");
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_reverse_rotate_a(a);
	ft_reverse_rotate_b(b);
	ft_printf("rra\n");
	ft_printf("rrb\n");
}
