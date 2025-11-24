/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:10:07 by memillet          #+#    #+#             */
/*   Updated: 2025/10/29 11:10:41 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int	ret_ft;
	int	ret_printf;
	char	c = 'A';
	char	*str = "Hello, 42!";
	void	*ptr = str;
	int		nb = -42;
	unsigned int	u = 4294967295;

	printf("=============== TESTS FT_PRINTF ===============\n\n");

	// Test caractères
	printf("Test %%c :\n");
	ret_ft = ft_printf("ft_printf -> [%c]\n", c);
	ret_printf = printf("printf    -> [%c]\n", c);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test chaîne
	printf("Test %%s :\n");
	ret_ft = ft_printf("ft_printf -> [%s]\n", str);
	ret_printf = printf("printf    -> [%s]\n", str);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test pointeur
	printf("Test %%p :\n");
	ret_ft = ft_printf("ft_printf -> [%p]\n", ptr);
	ret_printf = printf("printf    -> [%p]\n", ptr);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test entier signé
	printf("Test %%d et %%i :\n");
	ret_ft = ft_printf("ft_printf -> [%d] [%i]\n", nb, nb);
	ret_printf = printf("printf    -> [%d] [%i]\n", nb, nb);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test entier non signé
	printf("Test %%u :\n");
	ret_ft = ft_printf("ft_printf -> [%u]\n", u);
	ret_printf = printf("printf    -> [%u]\n", u);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test hexadécimal minuscule
	printf("Test %%x :\n");
	ret_ft = ft_printf("ft_printf -> [%x]\n", u);
	ret_printf = printf("printf    -> [%x]\n", u);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test hexadécimal majuscule
	printf("Test %%X :\n");
	ret_ft = ft_printf("ft_printf -> [%X]\n", u);
	ret_printf = printf("printf    -> [%X]\n", u);
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	// Test %%
	printf("Test %%%% :\n");
	ret_ft = ft_printf("ft_printf -> [%%]\n");
	ret_printf = printf("printf    -> [%%]\n");
	printf("Return ft_printf = %d | Return printf = %d\n\n", ret_ft, ret_printf);

	printf("=============== FIN DES TESTS ===============\n");

	return (0);
}
