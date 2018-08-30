/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 20:39:26 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 16:44:06 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

int		g_n_words;

int		is_whitespace(char c, char *whites)
{
	int i;

	i = 0;
	while (whites[i] != '\0')
	{
		if (whites[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int		count_words(char *str, char *whites)
{
	int	word;
	int number_words;
	int i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_whitespace(str[i], whites) && word == 0)
		{
			++number_words;
			word = 1;
		}
		else if (is_whitespace(str[i], whites))
		{
			word = 0;
		}
		++i;
	}
	return (number_words);
}

int		calculate_length(char *str, char *whites)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !is_whitespace(str[i], whites))
		++i;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset, int *x, int *y)
{
	int		i;
	char	**array;
	int		word;
	int		length;

	array = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	word = 0;
	g_n_words = 0;
	i = -1;
	while (str[++i] != '\0')
		if (!is_whitespace(str[i], charset) && word == 0 && ((word = 1) || 1))
		{
			length = calculate_length(&str[i], charset);
			array[g_n_words] = (char *)malloc((length + 1) * sizeof(char));
			array[g_n_words] = ft_strncpy(array[g_n_words], &str[i], length);
			++g_n_words;
		}
		else if (is_whitespace(str[i], charset))
			word = 0;
	*x = (i / g_n_words) - 1;
	array[g_n_words] = 0;
	*y = g_n_words;
	return (array);
}
