/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:46:45 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 10:41:24 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **stack, int data)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return ;
	temp->content = data;
	temp->next = NULL;
	if (!stack)
	{
		(*stack) = temp;
		return ;
	}
	temp->next = (*stack);
	(*stack) = temp;
}

void	ft_push_a(t_list **a, t_list **b)
{
	if (!*b)
		return ;
	ft_push(a, (*b)->content);
	*b = (*b)->next;
	ft_printf("pa\n");
}

void	ft_push_b(t_list **a, t_list **b)
{
	if (!*a)
		return ;
	ft_push(b, (*a)->content);
	*a = (*a)->next;
	ft_printf("pb\n");
}
