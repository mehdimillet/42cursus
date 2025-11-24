/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:27:32 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 23:27:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &*s, 1);
		s++;
	}
}
/* int main() {
	ft_putstr_fd("Hello, World!", 1);
	// Should print "Hello, World!" to standard output
	ft_putchar_fd('\n', 1);
	return 0;
} */
