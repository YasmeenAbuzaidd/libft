/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:56:02 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/03 17:32:37 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start_count(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	ok;

	i = 0;
	start = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		ok = 1;
		while (j < ft_strlen(s2) && ok)
		{
			if (s1[i] != s2[j])
				j++;
			else
				ok = 0;
		}
		if (!ok)
			start = i;
		else
			return (start);
		i++;
	}
	return (start);
}

static size_t	end_count(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	ok;
	size_t	end;

	len1 = ft_strlen(s1) - 1;
	end = len1 + 1;
	while (len1 == 0 || len1 > 0)
	{
		len2 = 0;
		ok = 1;
		while (len2 < ft_strlen(s2) && ok)
		{
			if (s1[len1] != s2[len2])
				len2++;
			else
				ok = 0;
		}
		if (!ok)
			end = len1;
		else
			return (end);
		len1--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (!s1)
		return (0);
	i = 0;
	start = start_count(s1, set) + 1;
	end = end_count(s1, set) - 1;
	if (end + 1 == 0)
		return (0);
	if (start == end)
	{
		str = malloc(2 * sizeof(char));
		str[0] = (char) s1[start];
		str[1] = '\0';
		return (str);
	}
	else
		str = malloc(end - start + 2);
	while (start <= end)
		str[i++] = (char) s1[start++];
	str[end + 1] = '\0';
	return (str);
}
#include <stdio.h>
int	main(void)
{
	const char	str[40] = "abcdppp";
	const char	s[10] = "pppp";

	printf("%s", ft_strtrim(str, s));
}
