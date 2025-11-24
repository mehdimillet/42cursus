/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:44:32 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 20:44:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*trimmed_str(char const *s1, size_t start, size_t len)
{
	size_t	i;
	char	*trimmed;

	i = 0;
	if (len == 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	trimmed = malloc((len + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	size_t	len;

	start = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (malloc(1));
	while (is_in_set(set, s1[start]))
		start++;
	while (is_in_set(set, s1[end]))
		end--;
	len = end - (start - 1);
	return (trimmed_str(s1, start, len));
}
/* int main(void)
{
	char *s1 = "  Hello, World!  ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Original: '%s'\n", s1);
		printf("Trimmed: '%s'\n", trimmed);
		free(trimmed);
	}
	return 0;
} */
