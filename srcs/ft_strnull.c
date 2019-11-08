/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnull.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/08 13:59:21 by lravier        #+#    #+#                */
/*   Updated: 2019/11/08 15:50:06 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

int		ft_handle_pnull(t_pf_arg *instr)
{
	int i;
	char *str;

	str = "0x0";
	i = 0;
	instr->len = 2 + instr->precision;
	// if (instr->precision > 1)
	// 	instr->len++;
	instr->tmp = ft_strnew(instr->len);
	if (!instr->tmp)
		return (0);
	ft_memset(instr->tmp, '0', instr->len);
	while (i < instr->len && str[i])
	{
		instr->tmp[i] = str[i];
		i++;
	}
	return (1);
}

int		ft_strnull(t_pf_arg *instr)
{
	if (instr->conversion == 'p')
		return (ft_handle_pnull(instr));
	else
	{
		if (instr->precision >= 0 && instr->precision < 6)
			instr->len = instr->precision;
		else
			instr->len = 6;
		instr->tmp = ft_strnew(instr->len);
		if (!instr->tmp)
			return (0);
		instr->tmp = ft_strncpy(instr->tmp, "(null)", instr->len);
	}
	return (1);
}
