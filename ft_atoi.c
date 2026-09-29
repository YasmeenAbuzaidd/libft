/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:22:07 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/26 17:31:33 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	if (nptr[0] == '-')
		res = res * -1;
	return (res);
}
/*
int main()
{
	char str[6]="abcd";
	printf("%d", ft_atoi(str));
}*/
