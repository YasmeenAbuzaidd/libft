/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:08:57 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/29 18:31:01 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i < len)
	{
		str[i] = (*f)(i,(char *) s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
int main()
{
	const char s[8]="yasmeen";
	printf("%s",ft_strmapi(s,ft_toupper));
}
