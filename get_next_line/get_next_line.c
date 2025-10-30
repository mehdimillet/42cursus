/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:21:27 by memillet          #+#    #+#             */
/*   Updated: 2025/10/30 11:49:58 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	int			buff_read;
	static char	*buff_stay;

	buffer = malloc ((BUFFER_SIZE + 1) * sizeof(buffer));
	if (!buffer)
		return (NULL);	
	if (fd < 0)
		return (NULL);
	buff_read = read(fd, buffer, sizeof(buffer) + 1);
	if (buff_read <= 0)
	{
		free (buffer);
		return (NULL);
	}
	buff_stay = ft_strjoin (buff_stay, buffer);
	ft_strchr(buff_stay, '\n');
	buffer[buff_read] = '\0';
	close (fd);
	return (buffer);
}

fd = open("texte.txt", O_RDONLY);
