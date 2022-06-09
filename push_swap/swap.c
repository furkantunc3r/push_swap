/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:45:50 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 10:41:16 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_list *list)
{
	t_list	*temp;

	if (ft_lstsize(list) < 2)
		return ;
	temp = ft_lstnew(list->content);
	list->content = list->next->content;
	list->next->content = temp->content;
	ft_printf("sa\n");
}

void	ft_swap_b(t_list *list)
{
	t_list	*temp;

	if (ft_lstsize(list) < 2)
		return ;
	temp = ft_lstnew(list->content);
	list->content = list->next->content;
	list->next->content = temp->content;
	ft_printf("sb\n");
}

void	ft_ss(t_list *a, t_list *b)
{
	ft_swap_a(a);
	ft_swap_b(b);
	ft_printf("sa\n");
	ft_printf("sb\n");
}
