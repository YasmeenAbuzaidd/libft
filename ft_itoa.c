/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:51:52 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/29 14:31:52 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*s;
	char	sign;

	len = length(n);
	if (n < 0)
	{
		len++;
		sign = '-';
		n *= -1;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == 0)
		return (0);
	while (len--)
	{
		s[len] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (sign == '-')
		s[0] = '-';
	s[i] = '\0';
	return (s);
}
/*
int main()
{
	printf("%s",ft_itoa(11100));
}*/
