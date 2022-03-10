/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:23:32 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/10 18:16:11 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*ptr;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * size);
	if (!dst)
		return (NULL);
	ptr = ft_memcpy(dst, s1, ft_strlen(s1));
	ft_memcpy(ptr, s2, ft_strlen(s2));
	return (dst);
}
