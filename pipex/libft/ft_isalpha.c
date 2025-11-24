/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:14:14 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:41:03 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* int main(void)
{
	char test1 = 'a';
	char test2 = 'Z';
	char test3 = '5';
	char test4 = '#';
	printf("Is '%c' alphabetic? %d\n", test1, ft_isalpha(test1));
	printf("Is '%c' alphabetic? %d\n", test2, ft_isalpha(test2));
	printf("Is '%c' alphabetic? %d\n", test3, ft_isalpha(test3));
	printf("Is '%c' alphabetic? %d\n", test4, ft_isalpha(test4));
	return 0;
} */