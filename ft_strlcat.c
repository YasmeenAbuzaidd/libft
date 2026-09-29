/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:54:43 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/29 12:28:13 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len1;
	size_t	len2;
	size_t	length;
	size_t	total_length;

	len1 = (size_t) ft_strlen(dst);
	len2 = (size_t) ft_strlen(src);
	length = len2;
	if ((!dst || !src) && !size)
		return (0);
	if (size >= len1)
		total_length = len1 + len2;
	else
		total_length = size + len2;
	len2 = 0;
	if (len1 > size)
		len1 = size;
	while (length--)
	{
		dst[len1] = src[len2];
		len1++;
		len2++;
	}
	dst[len1] = '\0';
	return (total_length);
}

int	main(void)
{
char		destination[0];
const char	source[7]="&Y";
size_t		total_length;

//total_length = ft_strlcat(destination, source, 0);
//printf("Concatenated string: %s\n", destination);
//printf("Total length: %zu\n", total_length);
printf("%zu\n",strlcat(destination,source,0));
printf("%s",destination);
}

