/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:06:57 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:50:18 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}
/* int main(void)
{
	const char *str1 = "HelloWorld";
	const char *str2 = "HelloWxrld";
	size_t n = 10;

	int result = ft_memcmp(str1, str2, n);
	if (result < 0)
		printf("str1 is less than str2\n");
	else if (result > 0)
		printf("str1 is greater than str2\n");
	else
		printf("str1 is equal to str2\n");

	return 0;
} */
