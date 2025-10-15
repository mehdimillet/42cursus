/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:24:44 by memillet          #+#    #+#             */
/*   Updated: 2025/10/15 11:24:26 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*d;

	temp = (char *)src;
	d = (char *)dest;
	if (temp == (void *)0 && d == (void *)0)
		return (dest);
	if (temp < d)
	{
		while (n--)
			d[n] = temp[n];
	}
	else
		ft_memcpy(d, temp, n);
	return (dest);
}
