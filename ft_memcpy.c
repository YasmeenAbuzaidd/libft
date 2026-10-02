/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/25 11:21:26 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 22:04:52 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src)
		return (dest);
	while (n--)
	{
		((unsigned char *) dest)[i] = ((const unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
char x[6]="Jazmmm";
char y[6];
printf("%s",ft_memcpy(y,x,3));
}*/
