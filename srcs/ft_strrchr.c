/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:41:11 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/05 20:50:25 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	match;
	int	i;

	match = -1;
	i = -1;
	while (s[++i])
		if (s[i] == c)
			match = i;
	if (match == -1)
		return (s[i]);
	return (s[match]);
}
