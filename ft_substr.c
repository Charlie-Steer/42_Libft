/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:33:33 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/11 18:30:54 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;

	substr_len = 0;
	if (!(ft_strlen(s) < start))
	{
		while (s[start + substr_len] != '\0' && substr_len < len)
		{
			substr_len++;
		}
	}
	substr = malloc((substr_len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_memmove(substr, &s[start], (substr_len));
	if (!(ft_strlen(s) < start))
	{
		substr[substr_len] = '\0';
	}
	return (substr);
}
