/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:23:28 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/04 14:25:47 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	int		c;
	char	*str;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	while (src[i] && !is_charset(charset, src[i]))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] && is_charset(charset, str[i]))
			i++;
		if (str[i] && !is_charset(charset, str[i]))
			c++;
		while (str[i] && !is_charset(charset, str[i]))
			i++;
	}
	return (c);
}

int	ft_index(char *str, char *charset, int index)
{
	int	i;
	int	c;
	int	j;

	j = -1;
	i = 0;
	c = 0;
	while (str[i] && c != index)
	{
		while (str[i] && is_charset(charset, str[i]))
			i++;
		if (str[i] && !is_charset(charset, str[i]))
		{
			c++;
			j = i;
		}
		while (str[i] && !is_charset(charset, str[i]))
			i++;
	}
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	char	**split_str;

	if (!str || !charset)
		return (NULL);
	size = count_words(str, charset);
	split_str = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split_str)
		return (NULL);
	i = -1;
	while (++i < count_words(str, charset))
	{
		split_str[i] = ft_strdup(&str[ft_index(str, charset, i + 1)], charset);
		if (!split_str[i])
			return (NULL);
	}
	split_str[i] = 0;
	return (split_str);
}
