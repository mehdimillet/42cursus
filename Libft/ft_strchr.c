/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_schr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:56:41 by memillet          #+#    #+#             */
/*   Updated: 2025/10/14 06:18:52 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}

// int main(void)
// {
// 	const char *text = "Hello, world!";
// 	char to_find = 'o';

// 	char *result = schr(text, to_find);

// 	if (result)
// 		printf("%ld\n", result - text);
// 	else
// 		printf("%c\n", to_find);

// 	return (0);
// }
