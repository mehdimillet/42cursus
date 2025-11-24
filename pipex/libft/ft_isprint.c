/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:14:14 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:41:55 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	else
		return (0);
}
/* int main(void)
{
	char test1 = 'A';
	char test2 = ' ';
	char test3 = 127;
	printf("Is '%c' printable? %d\n", test1, ft_isprint(test1));
	printf("Is '%c' printable? %d\n", test2, ft_isprint(test2));
	printf("Is '%d' printable? %d\n", test3, ft_isprint(test3));
	return 0;
} */
