/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Xyz <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:48 by aluque-v          #+#    #+#             */
/*   Updated: 2024/12/21 23:53:40 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < dstsize)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
