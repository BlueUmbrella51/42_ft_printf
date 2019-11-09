/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_writeout.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/08 14:20:12 by lravier        #+#    #+#                */
/*   Updated: 2019/11/09 19:03:13 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include "../libft/libft.h"

int		ft_write_vs(char *src, int len, t_writer *wrt)
{
	if (len == 0)
		return (1);
	ft_strncpy(&(wrt->u.vsn.str[wrt->curr]), src, len);
	wrt->curr += len;
	return (1);
}

int		ft_write_vsn(char *src, int len, t_writer *wrt)
{
	int to_write;

	to_write = 0;
	if (len == 0)
		return (1);
	if (wrt->u.vsn.space)
	{
		if (wrt->curr + len >= (wrt->u.vsn.vsn_max - 1))
		{
			to_write = (wrt->u.vsn.vsn_max - 1) - wrt->curr;
			wrt->u.vsn.space = 0;
			wrt->u.vsn.last_ind = wrt->curr + to_write;
		}
		else
			to_write = len;
		ft_strncpy(&(wrt->u.vsn.str[wrt->curr]), src, to_write);
	}
	wrt->curr += len;
	return (1);
}

int		ft_write_vf(char *src, int len, t_writer *wrt)
{
	if (len == 0)
		return (1);
	if ((int)fwrite(src, 1, len, wrt->u.vf.fp) != len)
		return (0);
	wrt->curr += len;
	return (1);
}

int		ft_write_vd(char *src, int len, t_writer *wrt)
{
	if (len == 0)
		return (1);
	if (write(wrt->u.vd.fd, src, len) != len)
		return (0);
	wrt->curr += len;
	return (1);
}

int     ft_enlarge(char **str, int prev_size, int new_size)
{
	char *new;

	if (new_size - prev_size <= 0)
	    return (1);
	new = ft_strnew((size_t)new_size);
    if (!new)
	    return (0);
	ft_strcpy(new, *str);
	free(*str);
	*str = new;
	printf("new %s\n", *str);
	return (1);
}

int		ft_write_vas(char *src, int len, t_writer *wrt)
{
	int enlarge;

	if (len == 0)
		return (1);
	printf("curr %d\n", wrt->curr);
	enlarge = wrt->u.vas.vas_size;
	if ((wrt->curr + len) >= (wrt->u.vas.vas_size - 1))
	{
		while (wrt->curr + len >= (enlarge - 1))
			enlarge += BUFF_SIZE;
		if (!ft_enlarge(wrt->u.vas.cpp, wrt->u.vas.vas_size,
		enlarge))
			return (0);
		wrt->u.vas.cpp = (char **)wrt->u.vas.cpp;
		wrt->u.vas.vas_size = enlarge;
	}
	ft_strncpy(&(*wrt->u.vas.cpp)[wrt->curr], src, len);
	wrt->curr += len;
	printf("curr %d\n", wrt->curr);
	return (1);
}
