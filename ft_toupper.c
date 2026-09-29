/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:24:56 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/25 17:35:08 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int num)
{
	if (num >= 'a' && num <= 'z')
		return (num - 32);
	else
		return (num);
}
/*
int main()
{
	char c =ft_toupper('a');
	printf("%c",c);
}*/
