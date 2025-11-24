/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:14:14 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:41:30 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/* int main(void)
{
	char test1 = '5';
	char test2 = 'a';
	printf("Is '%c' a digit? %d\n", test1, ft_isdigit(test1));
	printf("Is '%c' a digit? %d\n", test2, ft_isdigit(test2));
	return 0;
} */