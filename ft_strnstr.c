/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:10:15 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/18 15:34:16 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_equal(char *str, char *to_find, size_t len)
{
	int		i;

	i = -1;
	while (to_find[++i] && len--)
		if (str[i] != to_find[i])
			return (0);
	if (!(++len) && ft_strlen(str) != ft_strlen(to_find))
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	char	*str;
	char	*to_find;

	str = (char *)big;
	to_find = (char *)little;
	i = -1;
	if (!*to_find)
		return (str);
	while (str[++i] && len--)
		if (str[i] == *to_find)
			if (ft_is_equal(&str[i], to_find, len))
				return (&str[i]);
	return (0);
}
