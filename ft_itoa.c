/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 12:51:52 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/09/30 19:08:13 by yabuzaid        ###   ########.fr        */
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

void	fill(char *s, long num, int len, int *i)
{
	while (len--)
	{
		s[len] = (num % 10) + '0';
		num = num / 10;
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	long	num;
	char	*s;
	char	sign;

	i = 0;
	num = (long) n;
	len = length(n);
	if (n < 0)
	{
		len++;
		sign = '-';
		num *= -1;
	}
	else
		sign = '+';
	s = malloc((len + 1) * sizeof(char));
	if (s == 0)
		return (0);
	fill(s, num, len, &i);
	if (sign == '-')
		s[0] = '-';
	s[i] = '\0';
	return (s);
}
/*

int	main(void)
{
printf("%s", ft_itoa(+11100));
}
*/
