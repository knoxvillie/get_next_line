/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:47:35 by jomirand          #+#    #+#             */
/*   Updated: 2022/11/25 12:11:36 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	int		i;
	int		j;
	char	*str;
	size_t	lentotal;

	lentotal = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (lentotal + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (s2 && *(s2 + j))
	{
		*(str + i++) = *(s2 + j++);
	}
	*(str + i) = '\0';
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && *(str + i))
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	int		area;

	area = nmemb * size;
	ptr = malloc(area);
	if (!ptr)
		return (NULL);
	while (--area >= 0)
		*(ptr + area) = '\0';
	return ((void *)ptr);
}
