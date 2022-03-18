/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:38:55 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/18 13:41:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

// Libraries
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>

// Useful functions
size_t			ft_strlen(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb);
char			*ft_strdup(char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_bzero(void *s, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memset(void *s, int c, size_t n);

// Bonus

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstadd_back(t_list **lst, t_list *new);

#endif