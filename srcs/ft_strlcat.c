/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:10:06 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/05 20:39:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_un_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = ft_un_strlen(dest);
	size_src = ft_un_strlen(src);
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
