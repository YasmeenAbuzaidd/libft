/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 14:17:09 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 13:29:17 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = malloc(sizeof(t_list));
	if (!s)
		return (NULL);
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
