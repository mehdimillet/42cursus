/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:49:28 by memillet          #+#    #+#             */
/*   Updated: 2025/10/28 16:50:46 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkpourcent(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	if (format == 's')
		ft_putstr(va_arg(args, char *));
	if (format == 'p')
		ft_printmemory(va_arg(args, void *));
	if (format == 'd')
		ft_putnbr(va_arg(args, int));
	if (format == 'i')
		ft_putnbr(va_arg(args, int));
	if (format == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned int));
	if (format == 'x')
		ft_puthex(va_arg(args, unsigned int), 'x');
	if (format == 'X')
		ft_puthex(va_arg(args, unsigned int), 'X');
	if (format == '%')
		return(count = 1,ft_putchar('%'), count);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	va_start(args, format);
	i = 0;
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_checkpourcent(format[i + 1], args);
			i++;
		}
		else
			count += write (1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

int main(void)
{
	int ret1 = ft_printf("Salut %s, tu as %d ans et ton adresse est %p %%\n", "Mehdi", 19, &ret1);
	int ret2 = printf("Salut %s, tu as %d ans et ton adresse est %p %%\n", "Mehdi", 19, &ret1);

	printf("ft_printf = %d | printf = %d\n", ret1, ret2);
}
