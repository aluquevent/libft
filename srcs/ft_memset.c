/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 10:49:52 by aluque-v          #+#    #+#             */
/*   Updated: 2024/12/22 20:40:44 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (n > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		n--;
	}
	return (b);
}
