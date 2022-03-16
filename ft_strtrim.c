/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:23:30 by ademurge          #+#    #+#             */
/*   Updated: 2022/03/14 19:11:33 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

static int	ft_size_to_malloc(char const *s1, char const *set)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (is_in_set(s1[++i], set))
		count++;
	i = ft_strlen(s1);
	while (is_in_set(s1[--i], set))
		count++;
	printf("%d\n", count);
	return (ft_strlen(s1) - count + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	str = (char *)malloc(ft_size_to_malloc(s1, set) * sizeof(char));
	if (!str)
		return (NULL);	
	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (is_in_set(s1[start], set))
		start++;
	while (is_in_set(s1[end], set))
		end--;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}


int main()
{
	char	*s1 = "aaaaaaa";

	char	*ret = ft_strtrim(s1, "a");
	printf("%s\n", ret);
}