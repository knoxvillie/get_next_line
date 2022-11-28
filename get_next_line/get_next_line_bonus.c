/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:49:45 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/25 16:38:33 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_untilnl(int fd, char *stash)
{
	char	*rbuffer;
	int		rbytes;
	char	*tmp;

	rbuffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	rbytes = 42;
	while (rbytes > 0 && !(ft_strchr(rbuffer, '\n')))
	{
		rbytes = read(fd, rbuffer, BUFFER_SIZE);
		if (rbytes < 0)
		{
			if (stash)
				free (stash);
			free (rbuffer);
			return (NULL);
		}
		*(rbuffer + rbytes) = '\0';
		tmp = ft_strjoin(stash, rbuffer);
		free (stash);
		stash = tmp;
	}
	free (rbuffer);
	return (stash);
}

static char	*ft_getline(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!(*(stash + i)))
		return (NULL);
	while (*(stash + i) != '\n' && *(stash + i) != '\0')
		i++;
	line = malloc(sizeof(char) * (i + 1 + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (*(stash + i) != '\n' && *(stash + i) != '\0')
	{
		*(line + i) = *(stash + i);
		i++;
	}
	*(line + i) = *(stash + i);
	i++;
	*(line + i) = '\0';
	return (line);
}

static char	*ft_contentnt(char *stash)
{
	int		i;
	int		j;
	char	*contnl;

	i = 0;
	while (*(stash + i) != '\n' && *(stash + i) != '\0')
		i++;
	if (!stash[i])
	{
		free (stash);
		return (NULL);
	}
	contnl = ft_calloc(sizeof(char), (ft_strlen(stash) - i));
	i++;
	j = 0;
	while (*(stash + i) != '\0')
		*(contnl + j++) = *(stash + i++);
	free (stash);
	return (contnl);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash[MAX_F_OPENED];

	if (fd < 0 || BUFFER_SIZE < 1 || fd > MAX_F_OPENED)
		return (NULL);
	*(stash + fd) = ft_untilnl(fd, *(stash + fd));
	if (!*(stash + fd))
		return (NULL);
	line = ft_getline(*(stash + fd));
	stash[fd] = ft_contentnt(*(stash + fd));
	return (line);
}
