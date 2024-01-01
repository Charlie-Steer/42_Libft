/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:15:51 by cargonz2          #+#    #+#             */
/*   Updated: 2024/01/01 23:00:26 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && ((const unsigned char *)s1)[i] ==
		((const unsigned char *)s2)[i])
	{
		i++;
	}
	return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
}
