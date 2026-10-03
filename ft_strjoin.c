/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:26:48 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/03 21:17:35 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc((len1 + len2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = (char *)s1[i];
		i++;
	}
	while (j < len2)
	{
		str[i] = (char *)s2[j];
		i++;
		j++;
	}
	return (str);
}
/*
int main()
{
	const char s2[10]="yasmeen";
	const char s1[10]="Hello ";
	printf("%s",ft_strjoin(s1,s2));
}*/
