/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:52:50 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:54:11 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	tsrc;
	int	i;

	i = 0;
	tsrc = ft_strlen(src);
	while (i <= tsrc)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	chain_size;
	char	*chain;
	char	*string1;
	char	*string2;

	string1 = (char *)s1;
	string2 = (char *)s2;
	chain_size = ft_strlen(string1) + ft_strlen(string2);
	chain = malloc((chain_size + 1) * sizeof(char));
	if (!chain)
		return (NULL);
	ft_strcpy(chain, string1);
	ft_strcat(chain, string2);
	return (chain);
}
/* int main(void)
{
	const char *s1 = "Hello, ";
	const char *s2 = "World!";
	char *result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	return 0;
} */
