/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:24:27 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/11 19:59:42 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>


char	*ft_itoa(int n)
{
	char	*ptr;
	int		tmp_n;
	int		len;

	len = 1;
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	tmp_n = n;
	while ((tmp_n /= 10) > 0)
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (ptr);
	ptr[len + 1] = '\0';
	if (n == 0)
		ptr[0] = '0';
	while (len-- > 0 && n > 0)
	{
		ptr[len] = (n % 10) + '0';
		n /= 10;
	}
	if (len == 0)
		ptr[len] = '-';
	return (ptr);
}
