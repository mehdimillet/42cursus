/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:53:53 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:56:48 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	chain_filler(char *chain, char const *s,
	unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[start + i])
	{
		chain[i] = s[start + i];
		i++;
	}
	chain[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*chain;
	size_t	s_size;

	s_size = ft_strlen(s);
	if (start >= s_size)
	{
		chain = malloc(sizeof(char));
		if (!chain)
			return (NULL);
		chain[0] = '\0';
		return (chain);
	}
	if (len > s_size - start)
		len = s_size - start;
	chain = malloc((sizeof(char) * (len + 1)));
	if (!chain)
		return (NULL);
	chain_filler(chain, s, start, len);
	return (chain);
}
/* int main(void)
{
	char *result;
	char test_str[] = "Hello, World!";

	result = ft_substr(test_str, 7, 5);
	if (result)
	{
		printf("Substring: %s\n", result);
		free(result);
	}
	return 0;
} */
