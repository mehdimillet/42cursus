/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:02:11 by memillet          #+#    #+#             */
/*   Updated: 2025/10/29 11:11:41 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)// pour les caractere (%c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)// pour les string (%s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
		return (count = 6, write (1, "(null)", count), count);
	while (str[i] != '\0')
	{
		count += write (1, &str[i], 1);
		i++;
	}
	return (count);
}

int	ft_putnbr(int nb)// pour les int (%d)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (nb < 0)
	{
		count++;
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	count += ft_putchar(nb + '0');
	return (count);
}

int	ft_puthex(unsigned int n, char format)//pour l'hexadecimal (%x, %X)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex (n / 16, format);
	count += write (1, &base[n % 16], 1);
	return (count);
}

int	ft_unsigned_putnbr(unsigned int nb) // pour les unsigned int (%u)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_unsigned_putnbr(nb / 10);
		nb = nb % 10;
	}
	count += ft_putchar(nb + '0');
	return (count);
}
