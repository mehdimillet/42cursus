/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:03:43 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:54:22 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (size == 0 || i > size)
		return (size + j);
	if (!*src)
		return (i);
	j = 0;
	while (src[j] && (i + j < size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (i + j);
}

/* int main(void)
{
	char test_src[] = "world";
	char test_dest[10] = "hello";
	printf("%zu", ft_strlcat(test_dest, test_src, 7));
	printf("%s", test_dest);
} */