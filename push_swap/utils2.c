/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:19:21 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 11:56:22 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(t_list *list)
{
	int		i;
	int		data;
	t_list	*temp;

	temp = list;
	data = temp->content;
	i = 0;
	while (list != NULL)
	{
		if (data <= list->content && list != NULL)
			list = list->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}

void	ft_sort_mk3(t_list **a, t_list **b)
{
	int	i;

	while (*b)
	{
		i = big_index(*b);
		if (i != 0 && i <= ft_lstsize(*b) / 2)
			ft_rotate_b(b);
		else if (i != 0 && i > ft_lstsize(*b) / 2)
			ft_reverse_rotate_b(b);
		if (i == 0)
			ft_push_a(a, b);
	}
}

void	rotate_acc(t_list **a, t_list **b, int i, int back)
{
	while (i > 0)
	{
		if (back == 0)
			ft_rotate_a(a);
		else
			ft_reverse_rotate_a(a);
		i--;
	}
	ft_push_b(a, b);
}

void	push_chunk(t_list **a, t_list **b, int j)
{
	t_list	*hold;
	int		i;
	int		back;

	hold = *a;
	i = 0;
	back = 0;
	while (hold)
	{
		back = 0;
		if (hold->rank <= j)
		{
			i = ft_get_index(*a, hold->content);
			if (i > ft_lstsize(*a) / 2)
			{
				i = ft_lstsize(*a) - i;
				back = 1;
			}
			break ;
		}
		hold = hold->next;
	}
	rotate_acc(a, b, i, back);
}

void	ft_sort_mk2(t_list **a, t_list **b)
{
	int	i;
	int	j;

	i = 0;
	j = 39;
	while (*a)
	{
		if (i == 39)
		{
			i = 0;
			j += 40;
		}
		push_chunk(a, b, j);
		i++;
	}
	ft_sort_mk3(a, b);
	clear_stuff(a, b);
}
