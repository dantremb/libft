/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:19:43 by dantremb          #+#    #+#             */
/*   Updated: 2022/05/02 12:09:20 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* On dois ajouter "new" à la fin de la liste "lst". On crée un nouvel élément*/
/* t_list qui sera égal au dernier élément de "lst". Nn dit que le prochain   */
/* élément est "new". Si "lst" est NULL "lst" sera donc égal à "new"	      */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
