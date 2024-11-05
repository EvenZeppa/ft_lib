/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:17:25 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/05 21:24:11 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	big_len;
	int	little_len;

	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (!little)
		return (big);
	while (len > 0 && big_len >= little_len)
	{
		if (ft_memcmp(big, little, little_len) == 0)
			return (big);
		big++;
		len--;
	}
	return (NULL);
}
