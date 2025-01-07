/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asier <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:45:28 by asier             #+#    #+#             */
/*   Updated: 2024/12/29 18:12:23 by asier            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		else
			ptr++;
	}
	if (c == '\0')
		return ((char *)ptr);
	return (NULL);
}
