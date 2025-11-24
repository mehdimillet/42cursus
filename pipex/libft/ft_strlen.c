/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:59:36 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:54:30 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/* int main(void)
{
	const char *test_str = "Hello, World!";
	size_t length = ft_strlen(test_str);
	printf("Length of '%s' is %zu\n", test_str, length);
	return 0;
} */
