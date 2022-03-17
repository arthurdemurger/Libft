/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:09:55 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/18 00:05:57 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = dst;
	while (n--)
		*(char *)(dst++) = *(char *)(src++);
	return (tmp);
}

int main (void)
{
	char	str[] = 
}
