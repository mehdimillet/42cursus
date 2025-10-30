/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:22:49 by memillet          #+#    #+#             */
/*   Updated: 2025/10/30 11:47:45 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_clean(char *buff)
{
	
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)//pour enlever la partie que l'on a deja lue
{
	const char	*dest;

	dest = malloc (ft_strlen(s) * sizeof (const char) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy ((char *)dest, (char *)s);
	return ((char *)dest);
}

char	*ft_strchr(const char *s, int c)//trouver le premioer \n
{
	unsigned char	a;

	a = (unsigned char )c;
	while (*s)
	{
		if (*s == a)
			return ((char *)s);
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (NULL);
}

