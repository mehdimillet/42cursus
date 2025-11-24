/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:59:36 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:39:21 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* int main() {
    char str[10] = "123456789";
    ft_bzero(str, 10);
    printf("Test ft_bzero:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", str[i]);
    }
    printf("\n");
    return 0;
} */
