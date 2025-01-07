/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asier <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:13:57 by asier             #+#    #+#             */
/*   Updated: 2024/12/29 18:11:12 by asier            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	const char	*haystack_end;
	const char	*current;
	const char	*h;
	const char	*n;
	
	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	haystack_end = haystack + len;
	h = haystack;
	while ((h + needle_len <= haystack_end) && *h)
	{
		n = needle;
		current = h;
		while (*n && current < haystack_end && *current == *n)
		{
			current++;
			n++;
		}
		if (!*n)
			return ((char *)h);
		h++;
	}
	return (NULL);
}
