/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:29:31 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/24 12:12:25 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int num)
{
	if (num >= 'a' && num <= 'z')
		return (1);
	if (num >= 'A' && num <= 'Z')
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d",ft_isalpha('a'));
	printf("%d",ft_isalpha(7));

}*/
