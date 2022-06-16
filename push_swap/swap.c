/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:45:50 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 15:41:00 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **liste)
{
	t_list	*liste1;
	t_list	*liste2;

	liste1 = (*liste);
	liste2 = (*liste)->next;
	liste1->next = liste2->next;
	liste2->next = liste1;
	(*liste) = liste2;
}

void	ft_swap_a(t_list **a)
{
	if (!((*a)) || (!(*a)->next)
		|| ((*a)->next->content > (*a)->content))
		return ;
	swap(a);
	ft_printf("sa\n");
}

void	ft_swap_b(t_list **b)
{
	if (!((*b)) || (!(*b)->next)
		|| ((*b)->next->content > (*b)->content))
		return ;
	swap(b);
	ft_printf("sb\n");
}

void	swap_both(t_list **a, t_list **b)
{
	if ((!((*a)) || (!(*a)->next))
		|| ((*a)->next->content > (*a)->content)
		|| (!((*b)) || (!(*b)->next))
		|| ((*b)->next->content > (*b)->content))
		return ;
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
