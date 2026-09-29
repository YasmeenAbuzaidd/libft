/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:56:02 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/29 12:49:42 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start_count(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	ok;

	i = 0;
	ok = 1;
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

int	end_count(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	ok;
	size_t	end;

	len1 = ft_strlen(s1) - 1;
	ok = 1;
	while (len1)
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
	start = start_count(s1, set);
	end = end_count(s1, set);
	if (start > end)
		return (0);
	else if (start == end)
	{
		str = malloc (2 * sizeof(char));
		str[0] = (char *)s1[start];
		str[1] = '\0';
		return (str);
	}
	else
		str = malloc(((end--) - start + 1) * sizeof(char));
	while (start++ < end)
		str[i++] = (char *)s1[start];
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	const char str[]="aazYasmeenzaa";
	const char s[]="az";
	printf("%s",ft_strtrim(str,s));
}
*/
