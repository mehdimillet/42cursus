/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:24:44 by memillet          #+#    #+#             */
/*   Updated: 2025/10/17 17:40:42 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;

	source = (char *)src;
	dst = (char *)dest;
	if (source == (void *)0 && dst == (void *)0)
		return (dest);
	if (source < dst)
	{
		while (n--)
			dst[n] = source[n];
	}
	else
		ft_memcpy(dst, source, n);
	return (dest);
}
