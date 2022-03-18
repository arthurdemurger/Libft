/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:09:51 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/18 15:55:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- && *(unsigned char *)(src) != (unsigned char)c)
		*(unsigned char *)(dst++) = *(char *)(src++);
	if (*(unsigned char *)(src) == (unsigned char) c)
	{
		*(unsigned char *)(dst++) = *(unsigned char *)(src);
		return (dst);
	}
	return (NULL);
}
