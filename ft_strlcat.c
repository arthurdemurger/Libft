/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:10:06 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/11 16:06:43 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (!nb)
		return (size_src);
	while (size_dest + i < nb - 1 && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	if (i < nb)
		dest[size_dest + i] = 0;
	if (size_dest > nb)
		return (size_src + nb);
	return (size_src + size_dest);
}
