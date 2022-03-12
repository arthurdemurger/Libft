/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:23:28 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/12 15:00:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdup_split(const char *s, char c)
{
	int		i;
	int		count;
	char	*str;
	char	*src;

	src = (char *)s;
	i = 0;
	count = 0;
	while (src[count])
		count++;
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	while (src[i] && src[i] != c)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	count_words(const char *s, char c)
{
	int		i;
	int		count;
	char	*str;

	str = (char *)s;
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static int	ft_index(const char *s, char c, int index)
{
	int		i;
	int		count;
	int		j;
	char	*str;

	str = (char *)s;
	j = -1;
	i = 0;
	count = 0;
	while (str[i] && count != index)
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			j = i;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	char	**split_str;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	split_str = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split_str)
		return (NULL);
	i = -1;
	while (++i < count_words(s, c))
	{
		split_str[i] = ft_strdup_split(&s[ft_index(s, c, i + 1)], c);
		if (!split_str[i])
			return (NULL);
	}
	split_str[i] = 0;
	return (split_str);
}
