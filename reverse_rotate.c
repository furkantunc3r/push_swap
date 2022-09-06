/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:29:17 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 15:20:27 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverserotate(t_list **liste)
{
	t_list	*holder;
	t_list	*holder2;

	holder = *liste;
	holder2 = *liste;
	while (holder->next)
	{
		if (!(holder->next->next))
			holder2 = holder;
		holder = holder->next;
	}
	holder2->next = NULL;
	holder2 = *(liste);
	holder->next = holder2;
	*liste = holder;
}

void	ft_reverse_rotate_a(t_list **a)
{
	if ((!(*a)) || !((*a)->next))
		return ;
	reverserotate(a);
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_list **b)
{
	if ((!(*b)) || !((*b)->next))
		return ;
	reverserotate(b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_list **a, t_list **b)
{
	if ((!(*a)) || !((*a)->next)
		|| (!(*b)) || !((*b)->next))
		return ;
	reverserotate(a);
	reverserotate(b);
	ft_printf("rrr\n");
}
