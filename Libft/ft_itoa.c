/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:27:55 by memillet          #+#    #+#             */
/*   Updated: 2025/10/21 13:24:30 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbchar(int n)
{
	int	nb;

	nb = 0;

	if (n <= 0)
		nb = 1;
	while (n != 0)
	{
		n = n / 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*str;
	long int		size_n;
	int		i;
	
	i = 0;
	size_n = ft_nbchar(n);
	
		if (!(str = malloc ((size_n + 1) * sizeof (char))))
			return (NULL);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

