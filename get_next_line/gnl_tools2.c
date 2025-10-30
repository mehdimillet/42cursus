/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tools2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:45:14 by memillet          #+#    #+#             */
/*   Updated: 2025/10/30 11:48:16 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	int				i;

	i = 0;
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	while (temp[i])
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = (ft_strlen(s1) + ft_strlen (s2));
	dest = ft_calloc (sizeof (char), size + 1);
	if (!dest)
		return (NULL);
	while (*(s1 + i))
	{
		*(dest + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j))
	{
		*(dest + j + i) = *(s2 + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
