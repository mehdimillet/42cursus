/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:19:20 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:53:51 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copystring;
	size_t	i;
	size_t	taillestring;

	i = 0;
	taillestring = 0;
	while (s[taillestring])
		taillestring++;
	copystring = malloc(taillestring + 1 * sizeof(char));
	if (copystring == NULL)
		return (NULL);
	while (i < taillestring)
	{
		copystring[i] = s[i];
		i++;
	}
	copystring[i] = '\0';
	return (copystring);
}
/* int main(void)
{
	const char *original = "Hello, World!";
	char *duplicate = ft_strdup(original);
	if (duplicate)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	return 0;
} */
