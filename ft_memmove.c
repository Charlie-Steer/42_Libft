/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:45:41 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/15 09:58:45 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	else if ((unsigned char *)dst > (unsigned char *)src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
//char a[] = "test";
//char b[] = "hello_world";
char a[4];
char b[7];

memmove(a, b, 7);

printf("a: %s\nb: %s\n", a, b);

return (0);
}
*/
