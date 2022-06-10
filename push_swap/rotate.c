/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:47:25 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 15:31:03 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **liste)
{
	t_list	*holder;
	t_list	*holder2;

	holder = *liste;
	holder2 = *liste;
	while (holder->next)
		holder = holder->next;
	(*liste) = (*liste)->next;
	holder->next = holder2;
	holder2->next = NULL;
}

void	ft_rotate_a(t_list	**a)
{
	if ((!(*a)) || !((*a)->next))
		return ;
	rotate(a);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_list **b)
{
	if ((!(*b)) || !((*b)->next))
		return ;
	rotate(b);
	ft_printf("rb\n");
}

void	ft_rr(t_list **a, t_list **b)
{
	if ((!(*a)) || !((*a)->next)
		|| (!(*b)) || !((*b)->next))
		return ;
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
