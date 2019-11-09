/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_handle_f.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/11 19:48:54 by lravier        #+#    #+#                */
/*   Updated: 2019/11/09 16:43:05 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../floats/includes/floats.h"

int		ft_handle_f(t_pf_arg *instr)
{
	long double num;

	num = get_double(instr);
	if (!ft_get_string(instr, num))
		return (0);
	return (1);
}
