/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:29:52 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/22 22:59:46 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			nb++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (nb);
}

static char	*malloc_word(const char *s, int start, int end)
{
	char	*word;
	int		len;
	int		i;

	i = 0;
	len = end - start;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static char	**free_tab(char **tab, int nb_word)
{
	int	i;

	i = 0;
	while (i < nb_word)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**fill_tab(char **tab, char const *s, char c)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j] && s[j] != c)
		{
			start = j;
			while (s[j] != c && s[j])
				j++;
			tab[i] = malloc_word(s, start, j);
			if (!tab[i])
				return (free_tab(tab, i));
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;

	if (!s)
		return (NULL);
	nb_word = count_word(s, c);
	tab = malloc((nb_word + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab = fill_tab(tab, s, c);
	return (tab);
}
/* int main(void)
{
	char **result;
	int i;

	result = ft_split("  Hello  World  This is   a test  ", ' ');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("Word %d: '%s'\n", i, result[i]);
			i++;
		}
		// Free allocated memory
		i = 0;
		while (result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	return 0;
} */
