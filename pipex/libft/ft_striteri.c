/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:40:15 by marvin            #+#    #+#             */
/*   Updated: 2025/10/20 15:40:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* int main(void)
{
	char str[] = "Hello, World!";
	void print_indexed_char(unsigned int index, char *c)
	{
		printf("Index: %u, Char: %c\n", index, *c);
	}
	ft_striteri(str, print_indexed_char);
	return 0;
} */
