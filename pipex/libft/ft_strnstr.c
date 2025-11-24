/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:48:59 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:56:29 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*string;

	i = 0;
	j = 0;
	string = (char *)big;
	if (!*little)
		return (string);
	while (*string && j <= len)
	{
		if (*string == *little)
		{
			i = 1;
			while (little[i] && string[i] == little[i])
				i++;
			if (!little[i] && i + j <= len)
				return (string);
		}
		string++;
		j++;
	}
	return (NULL);
}
/* int main(void)
{
	const char *big = "Hello, this is a simple string.";
	const char *little = "simple";
	size_t len = 25;

	char *result = ft_strnstr(big, little, len);
	if (result)
	{
		printf("c la : %s\n", result);
	}
	else
	{
		printf("pas trouver wallah.\n");
	}
	return 0;
} */
