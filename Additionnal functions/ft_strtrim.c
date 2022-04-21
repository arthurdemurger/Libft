/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:23:30 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/14 00:27:27 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (is_in_set(*s1, set))
		s1++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && is_in_set(s1[end--], set))
		i++;
	return (ft_substr(s1, 0, ft_strlen(s1) - i));
}
