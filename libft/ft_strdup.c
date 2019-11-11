/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 10:50:28 by lravier        #+#    #+#                */
/*   Updated: 2019/11/11 11:07:28 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		len;

	if (s1 == NULL)
		return (0);
	len = (int)ft_strlen(s1);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	res = ft_strcpy(res, s1);
	return (res);
}
