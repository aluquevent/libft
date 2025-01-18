/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:22:01 by aluque-v          #+#    #+#             */
/*   Updated: 2025/01/18 16:22:03 by aluque-v         ###   ########.fr       */
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
