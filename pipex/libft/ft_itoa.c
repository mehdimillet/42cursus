/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:42:04 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:42:51 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			lenght;
	long int	nb;

	i = 0;
	nb = n;
	lenght = len(nb);
	str = malloc((lenght + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	if (nb < 0)
	{
		str[i] = '-';
		nb = -nb;
		i++;
	}
	str[lenght] = '\0';
	while (lenght > i)
	{
		lenght--;
		str[lenght] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/* int main(void)
{
	int test1 = 12345;
	int test2 = -6789;
	int test3 = 0;
	printf("Integer: %d, String: %s\n", test1, ft_itoa(test1));
	printf("Integer: %d, String: %s\n", test2, ft_itoa(test2));
	printf("Integer: %d, String: %s\n", test3, ft_itoa(test3));
	return 0;
} */
