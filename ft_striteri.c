/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 15:16:26 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/10 15:16:02 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 1;
	if (!s || !f)
		flag = 0;
	while (s[i] && flag)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	test(unsigned int i, char *c)
{
*c = *c + 1;
}

#include <stdio.h>
int main()
{
char s[10]="HELLOOOO";
ft_striteri(s, test);
printf("%s\n",s);
}*/
