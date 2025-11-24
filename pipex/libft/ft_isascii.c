/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:14:14 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:40:38 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int main(void)
{
	char test1 = 'A';
	char test2 = 200;
	printf("Is '%c' ASCII? %d\n", test1, ft_isascii(test1));
	printf("Is '%d' ASCII? %d\n", test2, ft_isascii(test2));
	return 0;
} */
