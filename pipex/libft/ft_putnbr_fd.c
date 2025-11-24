/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:36:28 by marvin            #+#    #+#             */
/*   Updated: 2025/10/20 16:36:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}
/* int main() {
	ft_putnbr_fd(12345, 1); // Should print '12345' to standard output
	ft_putchar_fd('\n', 1); 
	ft_putnbr_fd(-6789, 1); // Should print '-6789' to standard output
	ft_putchar_fd('\n', 1); 
	ft_putnbr_fd(0, 1); // Should print '0' to standard output
	ft_putchar_fd('\n', 1); 
	return 0;
} */
