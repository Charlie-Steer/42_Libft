/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:22:31 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/05 16:35:30 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *last_occ_found;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			last_occ_found = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
		return (last_occ_found);
	else
		return (NULL);
}
