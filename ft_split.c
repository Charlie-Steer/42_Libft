/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:14:37 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/14 17:11:52 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);
{
	int i;
	int j;
	char *separator;

	i = 0;
	j = 0;
	while (s[i])
	{
		separator = ft_strchr(s, c);
		ft_memmove(strdup(s, strlen());
	}
}
