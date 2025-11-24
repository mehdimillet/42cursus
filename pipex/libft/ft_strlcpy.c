/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:03:43 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:54:26 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	tsrc;

	i = 0;
	tsrc = ft_strlen(src);
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (tsrc);
}
/* int main(void)
{
	char test_src[] = "Hello, World!";
	char test_dest[20];
	size_t result;

	result = ft_strlcpy(test_dest, test_src, sizeof(test_dest));
	printf("Copied string: %s\n", test_dest);
	printf("Length of source string: %zu\n", result);
	return 0;
} */
