/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:24:48 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/11 08:47:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (n < 0)
	{
		ln = -ln;
		ft_putchar_fd('-', fd);
	}
	if (ln > 9)
		ft_putnbr_fd(ln / 10, fd);
	ft_putchar_fd(ln % 10 + 48, fd);
}
