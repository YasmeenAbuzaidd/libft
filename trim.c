/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:51:37 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/03 16:36:39 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int is_set(char *set, char c)
{
    int	i;
	int	flag;

	i = 0;
	flag = 0;
	while(set[i])
	{
		if(set[i] == c)
			flag = 1;
		i++;
	}
	return (flag);
}

int	start(char *str, char *set)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
		if(is_set(set, str[i]))
			i++;
		else
			break;
    }
	return (i);
}

int	end(char *str, char *set)
{
    int i;
    int j;

    i = ft_strlen(str) - 1;
    while (i >= 0 )
    {
		if(is_set(set, str[i]))
			i--;
		else
			break;
    }
	return (i);
}

char	*ft_strtrim(const char *s1, char *set)
{
	char	*str;
	int		begin;
	int		rbegin;
	int		total_len;
	int		i;

	i = 0;
	begin = start(s1, set);
	rbegin = end(s1,set);
	total_len = ft_strlen(s1) - begin - (ft_strlen(s1) - rbegin) + 1;
	str = malloc(total_len + 1);
	if(!str)
		return (NULL);
	while(begin <= rbegin)
	{
		str[i] = s1[begin];
		begin++;
		i++;
	}
	str[i] = '\0';
	return(str);
}

int	main(void)
{
	char	str[1000] = "JAZUJAZ";
	char	s[100] = "JAZ";

	printf("%s\n", ft_strtrim(str, s));
}
// HI MY NAME IS HI
