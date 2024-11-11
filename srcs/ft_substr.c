/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:19:45 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/11 17:03:01 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (ptr);
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
