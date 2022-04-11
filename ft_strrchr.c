/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:10:18 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/11 13:51:04 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (char) c)
			if (!ft_strchr(&s[i + 1], (char) c))
				return ((char *)&s[i]);
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}
