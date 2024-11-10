/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:37:24 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/10 22:23:15 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		total_size;

	total_size = nmemb * size;
	if (!nmemb && total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, total_size);
	return (ptr);
}
