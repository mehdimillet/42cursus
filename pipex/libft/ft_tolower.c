/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:24:53 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:56:52 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/* int main(void)
{
	char upper = 'A';
	char lower = ft_tolower(upper);
	printf("Original: %c, Lowercase: %c\n", upper, lower);
	return 0;
} */
