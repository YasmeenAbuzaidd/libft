/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:25:42 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/01 17:11:35 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	total;

	total = size * nmemb;
	if (!nmemb || !size)
	{
		arr = malloc(1);
		if (!arr)
			return (NULL);
		return (arr);
	}
	if (total / nmemb != size || total / size != nmemb)
		return (NULL);
	arr = malloc(total + 1);
	if (!arr)
		return (NULL);
	ft_bzero(arr, total);
	return (arr);
}

#include <stdio.h>
int	main(void)
{
	int	numItems = 15;
	char *s = ft_calloc(-3, sizeof(int));
	if (s == NULL)
		printf("its a NUL");
	else
		printf("idk");
	for (int i = 0; i < numItems; i++)
	{
		myArray[i] = i + 1;
	}
	// Display the contents of the memory
	for (int i = 0; i < numItems; i++)
	{
		printf("%d ", myArray[i]);
	}
	// Free the memory
	//free(myArray);
}
