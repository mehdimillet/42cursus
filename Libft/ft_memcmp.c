#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (NULL);
	while (*str1 == *str2 && i < n)
	{
		str1++;
		str2++;
	}
	return (((int)*str1) - ((int)*str2))<
}