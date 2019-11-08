/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range_check.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/08 13:40:35 by lravier        #+#    #+#                */
/*   Updated: 2019/10/08 13:54:04 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

void	check_range(t_pf_arg **instructions, int high, int *range)
{
	int			i;
	t_pf_arg	*tmp;

	tmp = *instructions;
	ft_bzero(range, high);
	i = 1;
	while (i <= high)
	{
		tmp = *instructions;
		while (tmp)
		{
			if (tmp->conv_no == i)
				range[i - 1] += 1;
			if (tmp->prec_no == i)
				range[i - 1] += 1;
			if (tmp->fw_no == i)
				range[i - 1] += 1;
			tmp = tmp->next;
		}
		i++;
	}
}

void	find_highest(t_pf_arg **instructions, int *high)
{
	t_pf_arg *tmp;

	tmp = *instructions;
	while (tmp)
	{
		if (tmp->conv_no > *high)
			*high = tmp->conv_no;
		if (tmp->fw_no > *high)
			*high = tmp->fw_no;
		if (tmp->prec_no > *high)
			*high = tmp->prec_no;
		tmp = tmp->next;
	}
}
