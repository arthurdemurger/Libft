/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:22:47 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/14 18:57:21 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_substr(char const *s, size_t max_len)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < max_len && str[i])
	{
		i++;
	}
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*str;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	src = (char *)s;
	str = (char *)malloc(sizeof(char) * ft_strlen_substr(&src[start], len));
	if (!str)
		return (NULL);
	while (src[++i + start])
		str[i] = src[i + start];
	str[i] = 0;
	return (str);
}
