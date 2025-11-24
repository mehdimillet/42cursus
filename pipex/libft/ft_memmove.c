/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:03:43 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:50:39 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dst > source)
	{
		while (n--)
			dst[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/* int main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Overlap Example";

	// Overlapping regions: dest starts within src
	printf("Before memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	ft_memmove(str1 + 7, str1, 6); // Move "Hello," to overlap with "World!"

	printf("After memmove:\n");
	printf("str1: %s\n", str1);

	return 0;
} */
