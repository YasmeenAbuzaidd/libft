/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:42:44 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/28 14:35:27 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return (0);
	else
	{
		if (start + len - 1 < s_len)
			substr = malloc (len * sizeof(char));
		else
		{
			substr = malloc ((s_len - start) * sizeof(char));
			len = s_len - start;
		}
		if (substr == 0)
			return (0);
		while (len--)
			substr[i++] = (char *)s[start++];
	}
	return (substr);
}
/*
int main()
{
	const char str[8]="yasmeen";
	printf("%s",ft_substr(str,1,3));
}*/
