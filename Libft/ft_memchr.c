#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*string;
	size_t				i;

	string = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
			return ((void *) string + i);
		i++;
	}
	return (NULL);
}
