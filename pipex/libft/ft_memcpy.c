/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbarre <qbarre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:03:43 by qbarre            #+#    #+#             */
/*   Updated: 2025/10/18 21:33:38 by qbarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tempsrc;
	unsigned char	*tempdest;
	size_t			i;

	i = 0;
	tempsrc = (unsigned char *)src;
	tempdest = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	dest = tempdest;
	return (dest);
}

/* int main() {

    int tab [] = {1, 2, 3, 4, 5};
    int * cpy = NULL;
    int size = sizeof( int ) * 5;
	int i = 0;
    cpy = (int *) malloc( size );
    ft_memcpy( cpy, tab, size );
    while( i < 5)
	{
        printf( "%d, ", cpy[i]);
		i++;
    }
    free (cpy);
    return (0);
} */
