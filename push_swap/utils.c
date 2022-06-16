/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 09:48:30 by ftuncer           #+#    #+#             */
/*   Updated: 2022/06/16 12:01:12 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_if_sort(t_list *a)
{
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

void	ft_check_arg(char *str, t_list **a)
{
	char	**nums;
	int		j;

	j = 0;
	nums = ft_split(str, ' ');
	while (nums[j] != NULL)
	{
		if (check_is_digit(nums[j]))
		{
			ft_lstadd_back(a, ft_lstnew(ft_atoi(nums[j])));
			j++;
		}
	}
}

void	ft_check_if_dup(t_list *a)
{
	t_list	*temp;
	t_list	*temp2;

	temp = a;
	while (temp->next)
	{
		temp2 = temp;
		while (temp2->next)
		{
			if (temp->content == temp2->next->content)
			{
				ft_printf("Duplicate Numbers!");
				exit (0);
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

int	ft_get_index(t_list *a, int i)
{
	int	j;

	j = 0;
	while (a->content != i && a)
	{
		a = a->next;
		j++;
	}
	return (j);
}

int	big_index(t_list *stack)
{
	int		i;
	int		data;
	t_list	*temp;

	temp = stack;
	data = temp->content;
	i = 0;
	while (stack != NULL)
	{
		if (data >= stack->content && stack != NULL)
			stack = stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}
