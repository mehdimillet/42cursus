/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:49:28 by memillet          #+#    #+#             */
/*   Updated: 2025/10/25 21:04:01 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *, ...)
{
	// return (nombre de caractere ecrit)
}

// faire une fonction qui trouve le pourcent : si oui -> regarder quelle pourcent et faire en consequence 
// 											si non -> ecrire le message entre ""
// faire une fonction qui divise les parties : celle entre parenthese / celle apres (les arguments)
// faire une fonction pour chaque pourcent

// Lire chaque caractere de la chaine de __attribute_format_arg__si c'est juste un caractere -> write
// si c'est un % lire le caractere suivant
// selon le caractere appeler la bonne fonction d'affichage
// utiliser va_arg()pour recuperer la valeur correspondante.
// compter combien de caractere ont ete ecrit et les return dans printf

// fonction dans utils:
// - ft_putchar / ft_putstr / ft_strlen / ft_putnbr / ft_putnbr_unsigned / ft_puthex / ft_itoa