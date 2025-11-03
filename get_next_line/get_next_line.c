/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:21:27 by memillet          #+#    #+#             */
/*   Updated: 2025/11/03 08:45:58 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_len_of_occurrence(char *buff_stay, char *pos)
{
	int	i;

	i = 0;
	if (pos != NULL)
		i = pos - buff_stay + 1;
	else
		i = ft_strlen(buff_stay);
	return (i);
}

static char	*ft_stay(char *buff_stay, char *pos)
{
	char	*temp;
	int		i;

	i = ft_len_of_occurrence(buff_stay, pos);
	if (pos)
	{
		temp = buff_stay;
		buff_stay = ft_substr(temp, i, ft_strlen(temp) - i);
		free (temp);
		return (buff_stay);
	}
	else
		return (NULL);
	return (0);
}

static char *ft_extract_line(char *buff_stay)
{
	char	*pos;
	char	*line;
	int		i;

	if (buff_stay == NULL)
		return (NULL);
	pos = ft_strchr(buff_stay, '\n');
	if (pos == NULL)
		return (buff_stay);
	i = ft_len_of_occurrence(buff_stay, pos);
	line = ft_substr(buff_stay, 0, i);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	int			buff_read;
	static char	*buff_stay;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (!buff_stay)
		  buff_stay = ft_substr("", 0, 0);                  
	while (!(ft_strchr(buff_stay, '\n')) && (buff_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[buff_read] = '\0';
		buff_stay = ft_strjoin (buff_stay, buffer);
	}
	if (!line && buff_stay && *buff_stay)
	{
		line = ft_extract_line(buff_stay);
    	buff_stay = ft_stay(buff_stay, ft_strchr(buff_stay, '\n'));
	}
	free (buffer);
	return (line);
}

int main(void)
{
	int fd;
	char *line;

	// 🔹 Ouvrir un fichier directement
	fd = open("texte.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}

	// 🔹 Lire et afficher chaque ligne
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return 0;
}