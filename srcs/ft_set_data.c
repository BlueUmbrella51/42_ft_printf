/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_data.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/08 13:56:39 by lravier        #+#    #+#                */
/*   Updated: 2019/10/30 14:49:51 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

static void	ft_set_data_rest3(va_list args, t_pf_arg *tmp)
{
	if (ft_strcmp(tmp->datatype, INT) == 0)
	{
		set_int(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, U_INT) == 0)
	{
		set_uint(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, U_CHAR) == 0)
	{
		set_uchar(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, W_INT) == 0)
	{
		set_wint(args, tmp);
		return ;
	}
}

static void	ft_set_data_rest2(va_list args, t_pf_arg *tmp)
{
	if (ft_strcmp(tmp->datatype, ULL_INT) == 0)
	{
		set_ullint(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, DOUBLE) == 0)
	{
		set_double(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, L_DOUBLE) == 0)
	{
		set_ldouble(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, STRING) == 0)
	{
		set_string(args, tmp);
		return ;
	}
	ft_set_data_rest3(args, tmp);
}

static void	ft_set_data_rest1(va_list args, t_pf_arg *tmp)
{
	if (ft_strcmp(tmp->datatype, S_INT) == 0)
	{
		set_sint(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, L_INT) == 0)
	{
		set_lint(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, UL_INT) == 0)
	{
		set_ulint(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, LL_INT) == 0)
	{
		set_llint(args, tmp);
		return ;
	}
	ft_set_data_rest2(args, tmp);
}

void		ft_set_data(va_list args, t_pf_arg *tmp)
{
	tmp->data = malloc(tmp->datasize);
	if (ft_strcmp(tmp->datatype, S_CHAR) == 0)
	{
		set_schar(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, US_INT) == 0)
	{
		set_usint(args, tmp);
		return ;
	}
	if (ft_strcmp(tmp->datatype, V_POINT) == 0)
	{
		set_vpoint(args, tmp);
		return ;
	}
	ft_set_data_rest1(args, tmp);
}
