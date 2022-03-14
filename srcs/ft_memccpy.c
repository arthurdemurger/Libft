/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:09:51 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/14 14:37:20 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- && *(char *)(src) != c)
		*(char *)(dst++) = *(char *)(src++);
	if (*(char *)(src) == c)
	{
		*(char *)(dst++) = *(char *)(src++);
		return (dst);
	}
	return (NULL);
}
/*
int main (void)
{
	char	dst_ft[] = "           ewewqeqweq";
	char	str_ft[] = "aaaaaaaaaaaaaaaaal";

	char	dst_man[] = "          ewewqeqweq";
	char	str_man[] = "aaaaaaaaaaaaaaaaal";
	
	char	c = 'l';

	char	*ret_ft = ft_memccpy(dst_ft, str_ft, c, ft_strlen(str_ft));
	char	*ret_man = memccpy(dst_man, str_man, c, ft_strlen(str_man));
	printf("ft : '%s'\nma : '%s'\n\nreturn :\nft : '%s'\
		nma : '%s'\n", dst_ft, dst_man, ret_ft, ret_man);
}
*/