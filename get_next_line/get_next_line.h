#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h> //pour open

//buufer
#define BUFFER_SIZE 42

//fichier get_next_line.c

char	*get_next_line(int fd);

//fichier gnl_tools.c

char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *str);

//fichier gnl_tools2.c

char	*ft_strjoin(char const *s1, char const *s2);