/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:17:09 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/01 16:10:29 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = malloc(sizeof(t_list));
	if (!s)
		return (0);
	s->content = content;
	s->next = NULL;
	return (s);
}
/*
int main()
{
	char *str="Hello";
	t_list *s=ft_lstnew(str);
	printf("%s",(char *)s->content);
	free(s);
}*/
