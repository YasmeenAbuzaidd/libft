/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:00:58 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/27 17:44:12 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	num;

	num = 0;
	while (str[num])
		num++;
	return (num);
}
/*
int main()
{
	printf("%d", ft_strlen("ABCDEF"));
}*/
