/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 05:07:59 by memillet          #+#    #+#             */
/*   Updated: 2025/10/14 06:23:41 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
