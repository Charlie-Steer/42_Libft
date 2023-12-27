/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:22:31 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/07 22:13:55 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occ_found;

	i = 0;
	last_occ_found = NULL;
	if (c < 0 || c > 256)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
		{
			last_occ_found = &((char *)s)[i];
		}
		i++;
	}
	if (last_occ_found != NULL)
		return (last_occ_found);
	else if (s[i] == '\0' && c == '\0')
		return (&((char *)s)[i]);
	else
		return (NULL);
}
