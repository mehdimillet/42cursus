/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:14:14 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 23:08:28 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
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
    printf("Is '%c' alphanumeric? %d\n", test1, ft_isalnum(test1));
    printf("Is '%c' alphanumeric? %d\n", test2, ft_isalnum(test2));
    printf("Is '%c' alphanumeric? %d\n", test3, ft_isalnum(test3));
    printf("Is '%c' alphanumeric? %d\n", test4, ft_isalnum(test4));
    return 0;
} */