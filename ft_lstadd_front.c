/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 15:28:57 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 14:24:11 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;

a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
printf("a address: %p\n", (void *) a);
printf("b address: %p\n", (void *) b);
ft_lstadd_front(&b, a);
printf("a address: %p\n", (void *) a);
printf("b address: %p\n", (void *) b);
printf("a content: %s\n", (char *) a->content);
printf("b content: %s\n", (char *) b->content);
c = ft_lstnew("Jasmine");
ft_lstadd_front(&b, c);
printf("%s\n", (char *) b->content);
printf("%s\n", (char *) b->next->content);
printf("%s\n", (char *) b->next->next->content);
return (0);
}
*/
