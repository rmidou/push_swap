/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:29:57 by nbiron            #+#    #+#             */
/*   Updated: 2023/11/22 15:42:54 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_strlenn(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*dup_strft(char const *src, int start, int end)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (i < end - start)
	{
		res[i] = src[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		i_tab;
	int		i;

	i = 0;
	start = 0;
	i_tab = 0;
	res = malloc(sizeof(char *) * (ft_strlenn(s) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] && c == s[i])
			i++;
		start = i;
		while (s[i] && c != s[i])
			i++;
		if (start < i)
			res[i_tab++] = dup_strft(s, start, i);
	}
	res[i_tab] = NULL;
	return (res);
}
