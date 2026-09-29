/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:25:34 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/26 16:33:55 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s11;
	char	*s22;

	i = 0;
	s11 = (char *) s1;
	s22 = (char *) s2;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[10]="greeks";
	char s2[10]="geeks";
	printf("%d",ft_memcmp(s1,s2,5));
}*/
