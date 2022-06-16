/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:56:24 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/09 15:53:15 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_give_rank(t_list **list)
{
	t_list	*holder;
	t_list	*holder2;

	if (!*list)
		return ;
	holder = *list;
	holder2 = *list;
	while (holder)
	{
		holder2 = *list;
		while (holder2)
		{
			if (holder->content > holder2->content)
				holder->rank++;
			holder2 = holder2->next;
		}
		holder = holder->next;
	}
}

void	small_sort(t_list **list)
{
	if (big_index(*list) == 0 && (min_index(*list) == 2)
		&& ft_lstsize(*list) != 2)
	{
		ft_swap_a(list);
		ft_reverse_rotate_a(list);
	}
	else if (big_index(*list) == 0 && ft_lstsize(*list) == 2)
		ft_swap_a(list);
	else if (big_index(*list) == 0 && ft_check_if_sort((*list)->next))
		ft_rotate_a(list);
	else if (big_index(*list) == 1 && min_index(*list) == 0)
	{
		ft_reverse_rotate_a(list);
		ft_swap_a(list);
	}
	else if (min_index(*list) == 2 && big_index(*list) == 1)
		ft_reverse_rotate_a(list);
	else
		ft_swap_a(list);
}

void	size_five(t_list **list1, t_list **list2)
{
	int	size;
	int	index;
	int	i;

	i = 0;
	size = ft_lstsize(*list1);
	while (ft_lstsize(*list1) > 3)
	{
		index = min_index(*list1);
		if (index >= ft_lstsize(*list1) / 2 && index != 0)
			ft_reverse_rotate_a(list1);
		else if (index <= ft_lstsize(*list1) / 2 && index != 0)
			ft_rotate_a(list1);
		else
			ft_push_b(list1, list2);
	}
	if (ft_lstsize(*list1) <= 3 && !ft_check_if_sort(*list1))
		small_sort(list1);
	while (i <= (size - ft_lstsize(*list1)))
	{
		ft_push_a(list1, list2);
		i++;
	}
}

void	clear_stuff(t_list **a, t_list **b)
{
	ft_lstclear(a);
	ft_lstclear(b);
	return ;
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	if (ac == 2)
		ft_check_arg(av[1], &a);
	else if (ac > 2)
		while (i < ac)
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(av[i++])));
	else
		exit (0);
	check_and_promote(&a);
	if (ft_check_if_sort(a))
		exit (0);
	else if (ft_lstsize(a) <= 3 && !ft_check_if_sort(a))
		small_sort(&a);
	else if (ft_lstsize(a) <= 5 && !ft_check_if_sort(a))
		size_five(&a, &b);
	else
		ft_sort_mk2(&a, &b);
	clear_stuff(&a, &b);
	return (0);
}
