/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:09:34 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/14 18:50:39 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (!size)
		return (NULL);
	mem = (void *)malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count);
	return (mem);
}

/*
int main (void)
{
	char *str;

	str = ft_calloc(7, 0);
	str[0] = 'q';
	str[1] = 'w';
	str[2] = 'e';
	str[3] = 'r';
	str[4] = 't';
	str[5] = 'y';
	printf("%s\n", str);
}*/