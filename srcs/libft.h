/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:38:55 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/12 14:02:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

size_t			ft_strlen(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb);
char			*ft_strdup(char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif