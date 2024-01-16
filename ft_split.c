/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:14:37 by cargonz2          #+#    #+#             */
/*   Updated: 2024/01/16 13:53:09 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static char	*cpy_str(char *substr, char *substr_end)
{
	char *newstr;
	size_t	i;

	while (substr[i] != substr_end)
	{
		i++;
	}
	newstr = malloc(i * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strlcpy(newstr, substr, i + 1);
		return (newstr);
	}
}
*/

static void	skip_chars(char **s, char c)
{
	while (**s == c)
		(*s)++;
}

static size_t	count_words(const char *s, char c)
{
	size_t	word_count;
	int		found_separator;
	int		found_word;
	size_t	i;

	word_count = 0;
	found_word = 0;
	found_separator = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found_separator = 1;
			found_word = 0;
		}
		else if (!found_word)
		{
			found_separator = 0;
			found_word = 1;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

static size_t	len_to_char(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i++);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	word_len;
	size_t	i;
	size_t	j;

	word_count = count_words(s, c);
	word_len = 0;
	i = 0;
	j = 0;

	//printf("%lu\n", count_words(s, c));
	
	char **str_arr = malloc(sizeof(char *) * word_count + 1);
	if (str_arr == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		if (word_len != 0)
		{
			//ft_strchr(&s[i], c);
			//printf("%s\n", ft_strchr(&s[i], c));
			i++;
			str_arr[j] = ft_substr(s, i, word_len);
			printf("%lu\n", len_to_char(&s[i], c));
			//printf("%s\n", str_arr[j]);
			j++;
			word_len = 0;
		}
	}
	return (str_arr);
}
