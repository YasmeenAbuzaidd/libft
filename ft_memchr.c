/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/26 15:11:54 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/10 15:14:20 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*news;

	i = 0;
	news = (char *) s;
	while (news[i] && news[i] != (char) c && i < n)
		i++;
	if (news[i] == (char) c)
		return ((void *)s + i);
	return (0);
}
/*
int main() {
char myStr[13] = "Hello World!";
char *myPtr = (char*)ft_memchr(myStr, 'o', 12);
printf("%s", myPtr);
return 0;
}*/
