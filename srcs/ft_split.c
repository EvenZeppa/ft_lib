/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:36:07 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/11 19:23:06 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	len_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (len_word(s, c) > 0)
		{
			s += len_word(s, c);
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**ptr_strs;
	int		nb_words;

	nb_words = count_words(s, c);
	strs = malloc(sizeof(char *) * nb_words + 1);
	if (!strs)
		return (strs);
	ptr_strs = strs;
	while (nb_words + 1 > 0)
	{
		while (*s == c)
			s++;
		*strs = malloc(sizeof(char) * len_word(s, c) + 1);
		if (!(*strs))
			return (ptr_strs);
		ft_strlcpy(*strs, s, len_word(s, c) + 1);
		s += len_word(s, c);
		strs++;
		nb_words--;
	}
	*strs = NULL;
	return (ptr_strs);
}
