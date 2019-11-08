/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_handle_c.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/06 15:49:41 by lravier        #+#    #+#                */
/*   Updated: 2019/10/03 16:39:00 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

static int	handle_nc(t_pf_arg *instr)
{
	unsigned char c;

	c = *((unsigned char *)instr->data);
	instr->len = 1;
	instr->tmp = ft_strnew(1);
	instr->tmp[0] = c;
	if (!instr->tmp)
		return (0);
	return (1);
}

int			ft_handle_c(t_pf_arg *instr)
{
	if (ft_strcmp(instr->datatype, U_CHAR) == 0)
		return (handle_nc(instr));
	return (ft_handle_wint(instr));
}
