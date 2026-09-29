/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:21:26 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/28 17:44:17 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src)
		return (dest);
	while (n--)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *) src)[i];
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
