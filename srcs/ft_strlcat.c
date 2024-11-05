/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:24:06 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/05 20:28:26 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	if (size < ft_strlen(dst))
		return (0);
}
