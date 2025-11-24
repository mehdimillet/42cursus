/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:05:38 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:23:04 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	somme;
	int	i;
	int	negatif;

	i = 0;
	negatif = 1;
	somme = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negatif *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		somme = (somme * 10) + ((int)nptr[i] - '0');
		i++;
	}
	return (somme * negatif);
}

/* int main(void)
{
	char *test = "   2147483647";
	printf("%d", ft_atoi(test));
} */
