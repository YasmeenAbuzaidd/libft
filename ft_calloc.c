/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:25:42 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/28 17:34:28 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max_size;

	max_size = (size_t) - 1;
	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > max_size / size)
		return (0);
	arr = malloc((nmemb * size) + 1);
	if (!arr)
		return (0);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
/*
int	main(void)
{
	int	numItems = 15;
	int	*myArray = ft_calloc(numItems, sizeof(int));

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
	free(myArray);
}*/
