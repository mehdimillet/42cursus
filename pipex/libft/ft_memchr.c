/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:03:43 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/18 20:33:35 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	size_t			i;

	ptr = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ptr == cc)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}

/* int main (void)
{
	char *array = "gros caca";
	char *c = ft_memchr(array, 'z', 9);
	printf("%s", c);
	return (0);
} */
