/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:12:41 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/10 22:23:15 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
			ptr_dest[i] = ptr_src[i++];
		return (dest);
	}
	i = n;
	while (i-- > 0)
		ptr_dest[i] = ptr_src[i];
	return (dest);
}
