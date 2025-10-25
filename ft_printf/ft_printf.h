/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:49:13 by memillet          #+#    #+#             */
/*   Updated: 2025/10/25 21:09:47 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

//fonction dans tools

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
