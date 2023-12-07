/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:01:23 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/07 20:14:00 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	*ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_memset(ptr, 0, count * size);
	return (ptr);
}
