/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 16:56:02 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/07 08:49:22 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	is_set(char *set, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (set[i])
	{
		if (set[i] == c)
			flag = 1;
		i++;
	}
	return (flag);
}

static int	start(char *str, char *set)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_set(set, str[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int	end(char *str, char *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (is_set(set, str[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		begin;
	int		rbegin;
	int		total_len;
	int		i;

	i = 0;
	begin = start((char *) s1, (char *) set);
	rbegin = end((char *) s1, (char *) set);
	total_len = rbegin - begin + 1;
	str = malloc(total_len + 1);
	if (!str)
		return (NULL);
	while (begin <= rbegin)
	{
		str[i] = s1[begin];
		begin++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
char	str[1000];
char	s[100];

str[0] = 'U';
str[1] = 'J';
str[2] = 'A';
str[3] = 'Z';
str[4] = 'T';
str[5] = '\0';
s[0] = 'J';
s[1] = 'A';
s[2] = 'Z';
s[3] = '\0';
printf("%s\n", ft_strtrim(str, s));
}
// HI MY NAME IS HI
*/
