/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:57:41 by aluque-v          #+#    #+#             */
/*   Updated: 2025/01/07 11:53:02 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*result;
	
	if(!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	result = (char*)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	if (result)
	{
		ft_strlcpy(result, s1, len);
		ft_strlcat(result, s2, len);
	}
	result[len] = '\0';
	return (result);
}