/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:18:09 by cargonz2          #+#    #+#             */
/*   Updated: 2024/01/01 22:57:25 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev_node;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		prev_node = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(prev_node);
	}
}
