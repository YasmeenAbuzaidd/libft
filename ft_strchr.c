/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:56:17 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/26 13:29:12 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i])
		i++;
	if (s[i] == (char)c)
		return (s + i);
	else
		return (0);
}
/*
int main()
{
	char myStr[] = "Hello World";
char *myPtr = ft_strchr(myStr, 'W');
  printf("%s", myPtr);

}*/
