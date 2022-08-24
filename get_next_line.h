/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:02:01 by pcamaren          #+#    #+#             */
/*   Updated: 2021/07/02 16:40:54 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		get_next_line(int fd, char **line);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *str);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strchr(char const *str, int c);
char	*ft_substr(char const *str, unsigned int start, size_t len);
void	ft_strdel(char **str);
char	*ft_eof(char *temp, char **line);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

#endif
