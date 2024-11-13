/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezeppa <ezeppa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:36:08 by ezeppa            #+#    #+#             */
/*   Updated: 2024/11/13 17:25:57 by ezeppa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*tmp_l;
	void	*tmp_content;

	if (!lst || !f || !del)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		tmp_content = f(lst->content);
		if (!tmp_content)
			return (ft_lstclear(&new_l, del), NULL);
		tmp_l = ft_lstnew(tmp_content);
		if (!tmp_l)
			return (ft_lstclear(&new_l, del), NULL);
		ft_lstadd_back(&new_l, tmp_l);
		lst = lst->next;
	}
	return (new_l);
}
