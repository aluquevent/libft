/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:32:16 by aluque-v          #+#    #+#             */
/*   Updated: 2024/12/23 17:37:01 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_src;
	char		*tmp_dst;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	tmp_src = (char *) src;
	tmp_dst = (char *) dst;
	i = -1;
	if (tmp_dst > tmp_src)
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (++i < len)
			tmp_dst[i] = tmp_src[i];
	}
	return (dst);
}
